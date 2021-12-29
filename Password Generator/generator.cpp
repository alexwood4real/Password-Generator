
//  generator.cpp
//  passwordGenerator
//
//  Created by OG Brown Skin on 12/24/21.
//
#include <algorithm>
#include <vector>

#include "generator.hpp"
#include "iostream"

// array used to hold the characters of password - will be shuffled
char password[12];

// will hold phone password
std::vector<char> cellPassword;

// global variables used
int choice;
int size;

// string that will hold the password
std::string passwordString;

// function when program opens
void driveFunction()
{
    int choice = 0;
    std::cout << "Welcome! Press 1 to generate a phone password.\n"
    << "Press 2 to generate a phone password.";
    
    std::cin >> choice;
    
    if(choice == 1)
    {
        // generates computer password
        passwordGenerate();
    }
    else
    {
        
    }
    
    
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
    
    std::cout << "Your password is: " << passwordString << "\n\n";
    
    
    std::cout << "Would you like to create a new password?\n"
    << "Press 1 to create new password, press 0 to create a phone password.\n"
    << "Press anything else to exit\n\n";
    std::cin >> choice;
    
    if(choice == 1)
    {
        // create another password
        passwordGenerate();
    }
    else if (choice == 0)
    {
        // creates phone password
        phonePassword();
    }
    else
    {
        // exit program - their loss
        exit(0);
    }
    
}

void phonePassword()
{
    std::cout << "How long would you like your password?\n";
    std::cin >> size;
    
    // generates random password of integers, doesn't need randomize
    for(int i = 0; i < size; i++)
    {
        cellPassword.push_back(48 + (rand() % 10));
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
