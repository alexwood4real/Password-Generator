
//  generator.cpp
//  passwordGenerator
//
//  Created by OG Brown Skin on 12/24/21.
//
#include <algorithm>

#include "generator.hpp"
#include "iostream"

// picks direction to take
int choice;

// array used to hold the characters of password - will be shuffled
char password[12];


// string that will hold the password
std::string passwordString;

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
    
    // adds special character
    password[0] = 32 + rand() % 15;
    
    // adds lower case
    for(int i = 1; i < 5; i++)
    {
        password[i] = 97 + (rand() % 26);
    }
    
    // adds upper case
    for(int i = 5; i < 9; i++)
    {
        password[i] = 65 + (rand() % 26);
    }
    
    // adds numbers
    for(int i = 9; i < 12; i++)
    {
        password[i] = 48 + (rand() % 10);
    }
    
    // randomize passoword - error here need to fix 
    randomize(password);
    
    // convert to string
    passwordString = "";
    for(int i = 0; i < 12; i++)
    {
        passwordString += password[i];
    }
    
    std::cout << "Your password is: " << passwordString << "\n";
    
}

void randomize(char* arr)
{
    srand(time(NULL)); // uses different value every time - has warning
    for(int i = 11; i > 0; i--)
    {
        int j = rand() % (i+1);
        std::swap(arr[i], arr[j]);
    }
}
