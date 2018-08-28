
/* 
 * File:   Dups.h
 * Author: danny
 *
 * Created on August 27, 2018, 3:25 PM
 */

#ifndef DUPS_H
#define DUPS_H

#include <Poco/Util/Application.h>

class Dups : public Poco::Util::Application {
public:
    Dups();
    virtual ~Dups();
protected:
    void initialize(Application& app) override;

    int main(const std::vector<std::string>& args) override;

    
private:

};

#endif /* DUPS_H */

