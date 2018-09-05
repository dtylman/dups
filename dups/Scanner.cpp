/* 
 * File:   PathList.cpp
 * Author: danny
 * 
 * Created on August 28, 2018, 3:08 PM
 */

#include "Scanner.h"
#include <Poco/DirectoryIterator.h>
#include <Poco/DigestStream.h>
#include <Poco/FileStream.h>
#include <Poco/StreamCopier.h>
#include <unordered_set>

Scanner::Scanner(const std::string& root) : _root(root), _logger(Poco::Logger::get("PathList"))
{

}

Scanner::~Scanner()
{
}

void Scanner::scan()
{
    _total = 0;
    scanDir(_root);
    _logger.information(Poco::format("Scanned %d files, %d suspected.", (int) _total, (int) _samesize.size()));
    for (auto iter = _samesize.begin(); iter != _samesize.end(); ++iter) {
        deepCompare(iter->second);
    }
    for (auto iter = _samehash.begin(); iter != _samehash.end(); ++iter) {
        if (iter->second.size() > 1) {
            handleDuplicates(iter->second);
        }
    }
    process();
}

void Scanner::scanDir(const std::string& dir)
{
    try {
        Poco::DirectoryIterator iter(dir);
        Poco::DirectoryIterator end;
        for (; iter != end; ++iter) {
            ++_total;
            std::string fileName = dir + Poco::Path::separator() + iter.name();
            if ((iter->isDirectory() && !iter->isLink())) {
                scanDir(fileName);
            }
            else if (iter->getSize() > 0) {
                _samesize[iter->getSize()].push_back(fileName);
            }
        }
    }
    catch (Poco::Exception& ex) {
        _logger.error(ex.displayText());
    }
}

void Scanner::deepCompare(const Handler::Items& items)
{
    if (items.size() < 2) {
        return; // ignore lists with only one item
    }
    else if (items.size() == 2) {
        deepCompare(*items.begin(), *++items.begin());
        return;
    }

    // compute hash..
    for (auto iter = items.begin(); iter != items.end(); ++iter) {
        try {
            const std::string& filename = *iter;
            _sha3.reset();            
            Poco::DigestOutputStream dos(_sha3);
            Poco::FileInputStream fis(filename);
            Poco::StreamCopier::copyStream(fis, dos);
            dos.flush();
            std::string hash = Poco::DigestEngine::digestToHex(_sha3.digest());
            _samehash[hash].push_back(filename);
            fis.close();
            _logger.information(Poco::format("Computing hash for %s: %s", filename,hash));
        }
        catch (const Poco::Exception& ex) {
            _logger.error(ex.displayText());
        }
    }

}

void Scanner::deepCompare(const std::string& fileA, const std::string& fileB)
{
    try {
        Poco::FileInputStream ais(fileA);
        Poco::FileInputStream bis(fileB);
        while ((ais.good()) && (bis.good())) {
            char a = ais.get();
            char b = bis.get();
            if (a != b) {
                ais.close();
                bis.close();
                return;
            }
        }
        ais.close();
        bis.close();
        handleDuplicates(fileA, fileB);
    }
    catch (const Poco::Exception& ex) {
        _logger.error(ex.displayText());
    }
}

void Scanner::handleDuplicates(const Handler::Items& duplicates)
{
    for (auto handler = _handlers.begin();handler!=_handlers.end();++handler){
        try{
            handler->get()->handleDuplicates(duplicates);
        }
        catch(const Poco::Exception& ex){
            _logger.error(ex.displayText());
        }
        catch (const std::exception& ex){
            _logger.error(ex.what());
        }
    }
}

void Scanner::handleDuplicates(const std::string& fileA, const std::string& fileB)
{
    Handler::Items items;
    items.push_back(fileA);
    items.push_back(fileB);
    handleDuplicates(items);
}

void Scanner::addHandler(Handler* handler)
{
    _handlers.push_back(std::unique_ptr<Handler>(handler));
}

void Scanner::process()
{
     for (auto handler = _handlers.begin();handler!=_handlers.end();++handler){
        try{
            handler->get()->process();
        }
        catch(const Poco::Exception& ex){
            _logger.error(ex.displayText());
        }
        catch (const std::exception& ex){
            _logger.error(ex.what());
        }
    }
}
