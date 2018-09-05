/* 
 * File:   Handler.h
 * Author: danny
 *
 * Created on September 4, 2018, 6:26 PM
 */

#ifndef HANDLER_H
#define HANDLER_H

#include <list>
#include <string>

class Handler {
public:
    typedef std::list<std::string> Items;

    virtual void handleDuplicates(const Items& duplicates) = 0;
    virtual void process() = 0;
};

#endif /* HANDLER_H */

