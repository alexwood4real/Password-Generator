
//  generator.cpp
//  passwordGenerator
//
//  Created by OG Brown Skin on 12/24/21.
//
#include <algorithm>

#include "generator.hpp"
#include "iostream"

// array used to hold the characters of password - will be shuffled
char password[12];

int choice;

// string that will hold the password
std::string passwordString;

// function when program opens
void driveFunction()
{
    std::cout << "Generating a random and unique password!\n";
    
    passwordGenerate();
    
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
    
    int choice = 0;
    
    std::cout << "Your password is: " << passwordString << "\n";
    std::cout << "Would you like to create a new password?\n"
    << "Press 1 to create new password, press 0 to destroy and exit program.\n";
    std::cin >> choice;
    
    if(choice == 1)
    {
        // create another password
        passwordGenerate();
    }
    else if (choice == 0)
    {
        // destroy and exit progam
        passwordString = "";
        std::cout << "Password deleted. Have a nice day\n";
        exit(0);
    }
    else
    {
        // exit program - their loss
        exit(0);
    }
    
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
