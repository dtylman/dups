/* 
 * File:   main.cpp
 * Author: danny
 *
 * Created on August 23, 2018, 4:28 PM
 */

#include <iostream>
#include <Poco/Path.h>

using namespace std;

int main(int , char**) {
    Poco::Path path;
    std::cout << "Hello world from " << path.self() << std::endl;    
    
    return 0;
}

