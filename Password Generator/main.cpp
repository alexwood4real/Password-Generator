//
//  main.cpp
//  passwordGenerator
//
//  Created by OG Brown Skin on 12/24/21.
//

#include <iostream>
#include "computerPassword.h"
#include "generator.hpp"

int main(int argc, const char * argv[])
{
    int theChoice = -1;
    while(theChoice != 0)
    {
        std::cout << "Welcome!\n"
        << "Press 1 to generate a computer password.\n"
        << "Press 2 to generate a phone password.\n";
        std::cin >> theChoice;
        
        if(theChoice == 1)
        {
            // computer password
            ComputerPassword compPass;
            compPass.ComputerPassword::~ComputerPassword();
        }
        else if(theChoice == 2)
        {
            // phone password
        }
    }
    
    // exits the program
    exit(0);
}
