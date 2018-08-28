/* 
 * File:   Dups.cpp
 * Author: danny
 * 
 * Created on August 27, 2018, 3:25 PM
 */

#include "Dups.h"
#include "MainForm.h"
#include "PathList.h"

Dups::Dups()
{
}

Dups::~Dups()
{
}

void Dups::initialize(Application& app)
{
    
}

int Dups::main(const std::vector<std::string>& args)
{
    std::cout << "Hello world" << std::endl;
    PathList pl("/home/danny/Pictures");    
    
    //set handlers:
    // script handler
    // soft-link newers
    // delete newers
    // ui handler (that can do all)
    pl.scan();
}


