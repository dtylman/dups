\
/* 
 * File:   StatsHandler.h
 * Author: danny
 *
 * Created on September 4, 2018, 6:26 PM
 */

#ifndef STATSHANDLER_H
#define STATSHANDLER_H

#include "Handler.h"
#include <Poco/Types.h>

class StatsHandler : public Handler{
public:
    StatsHandler();
    virtual ~StatsHandler();
    
    void handleDuplicates(const Items& duplicates) override;
    void process() override;

private:
    Poco::UInt64 _totalBytes;
};

#endif /* STATSHANDLER_H */

