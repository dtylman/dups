
/* 
 * File:   BasicActionsHandler.h
 * Author: danny
 *
 * Created on September 4, 2018, 6:08 PM
 */

#ifndef BASICACTIONSHANDLER_H
#define BASICACTIONSHANDLER_H

#include "Handler.h"


class BasicHandler : Handler{
public:
    BasicHandler();
    virtual ~BasicHandler();
    void handleDuplicates(const Items& duplicates) override;
    void process() override;

};

#endif /* BASICACTIONSHANDLER_H */

