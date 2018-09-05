
/* 
 * File:   StatsHandler.cpp
 * Author: danny
 * 
 * Created on September 4, 2018, 6:26 PM
 */

#include "StatsHandler.h"

#include <Poco/Logger.h>
#include <Poco/File.h>

StatsHandler::StatsHandler()
{
}

StatsHandler::~StatsHandler()
{
}

void StatsHandler::handleDuplicates(const Items& duplicates)
{
    Poco::Logger& logger = Poco::Logger::root();
    logger.information(Poco::format("Called with %d items", (int) duplicates.size()));
    for (auto iter = duplicates.begin(); iter != duplicates.end(); ++iter) {
        const std::string& filename = *iter;
        Poco::File file(filename);
        logger.information(Poco::format("%s size %d", filename, (int) file.getSize()));
        _totalBytes += file.getSize();
    }
}

void StatsHandler::process()
{
    Poco::Logger::root().information(Poco::format("Total size: %d KB", (int)_totalBytes/1024));
}
