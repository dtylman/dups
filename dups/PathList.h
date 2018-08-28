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

class PathList {    
public:
    PathList(const std::string& root);    
    virtual ~PathList();
    
    void scan();
private:
    typedef std::list<std::string> Items;    
    typedef std::map<Poco::File::FileSize, Items> FileSizeMap;
    typedef std::map<std::string, Items> FileHashMap;    
    
    void scanDir(const std::string& dir);
    void deepCompare(const Items& duplicates);
    void deepCompare(const std::string& fileA, const std::string& fileB);
    
    void handleDuplicates(const Items& duplicates);
    void handleDuplicates(const std::string& fileA, const std::string& fileB);
    
    FileSizeMap _samesize;
    FileHashMap _samehash;
    
    std::string _root;    
    Poco::SHA3Engine _sha3;
    Poco::Logger& _logger;   
    
    Poco::UInt64 _total;    
};

#endif /* PATHLIST_H */

