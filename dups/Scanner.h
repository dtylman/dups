/* 
 * File:   PathList.h
 * Author: danny
 *
 * Created on August 28, 2018, 3:08 PM
 */

#ifndef PATHLIST_H
#define PATHLIST_H


#include <Poco/File.h>
#include <Poco/Logger.h>
#include <Poco/SHA3Engine.h>

#include <string>
#include <map>
#include <list>

#include "Handler.h"

class Scanner {    
public:
    Scanner(const std::string& root);    
    virtual ~Scanner();
    
    void addHandler(Handler* handler); 
    void scan();
private:
    typedef std::map<Poco::File::FileSize, Handler::Items> FileSizeMap;
    typedef std::map<std::string, Handler::Items> FileHashMap;    
    typedef std::list<std::unique_ptr<Handler>> HandlersList;
    void scanDir(const std::string& dir);
    void deepCompare(const Handler::Items& duplicates);
    void deepCompare(const std::string& fileA, const std::string& fileB);
    
    void handleDuplicates(const Handler::Items& duplicates);
    void handleDuplicates(const std::string& fileA, const std::string& fileB);
    
    void process();
    FileSizeMap _samesize;
    FileHashMap _samehash;
    
    std::string _root;    
    Poco::SHA3Engine _sha3;
    Poco::Logger& _logger;   
    
    Poco::UInt64 _total;    
    
    HandlersList _handlers;
};

#endif /* PATHLIST_H */

