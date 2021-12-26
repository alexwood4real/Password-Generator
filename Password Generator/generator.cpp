
//  generator.cpp
//  passwordGenerator
//
//  Created by OG Brown Skin on 12/24/21.
//

#include "generator.hpp"
#include "iostream"

void driveFunction()
{
    int choice = 0;
    std::cout << "Please pick an option\n"
    << "1. Generate new password\n"
    << "2. Pull existing password\n";
    
    switch(choice)
    {
        case 1:
            // generates new password - will be first function created
            break;
        case 2:
            // pull password - will do later
            break;
        default:
            std::cout << "Please pick an option";
            break;
    }
}
