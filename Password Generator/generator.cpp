
//  generator.cpp
//  passwordGenerator
//
//  Created by OG Brown Skin on 12/24/21.
//

#include "generator.hpp"
#include "iostream"

// picks direction to take
int choice;

// will be the 12 variables used to store in password
char l1, l2, l3; // lower case
char u1, u2, u3; // upper case
char s1, s2, s3; // special characters
char n1, n2, n3; // numbers

// function when program opens
void driveFunction()
{
    choice = 0;
    std::cout << "Please pick an option\n"
    << "1. Generate new password\n"
    << "2. Pull existing password\n";
    
    std::cin >> choice;
    
    switch(choice)
    {
        case 1:
            // generates new password
            passwordGenerate();
            break;
        case 2:
            // pull password - will do later
            std::cout << "Case 2 works";
            break;
        default:
            std::cout << "Please pick an option";
            break;
    } // close switch
} // close driveFunction

void passwordGenerate()
{
    // defines random lower case
    l1 = 97 + rand() % 26;
    l2 = 97 + rand() % 26;
    l3 = 97 + rand() % 26;
    
    // defines random upper case
    u1 = 65 + rand() % 26;
    u2 = 65 + rand() % 26;
    u3 = 65 + rand() % 26;
    
    // defines random special characters
    s1 = 32 + rand() % 15;
    s2 = 32 + rand() % 15;
    s3 = 32 + rand() % 15;
    
    // defines random numbers
    n1 = 48 + rand() % 10;
    n2 = 48 + rand() % 10;
    n3 = 48 + rand() % 10;
    
    // make into password and shuffle then concatinate to a string
    // also have to make randomize function
}
