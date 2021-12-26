
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

// will be the 12 variables used to store in password
char l1, l2, l3, l4; // lower case
char u1, u2, u3, u4; // upper case
char n1, n2, n3; // numbers
char s1; // special characters

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
    // defines random lower case
    l1 = 97 + rand() % 26;
    l2 = 97 + rand() % 26;
    l3 = 97 + rand() % 26;
    l4 = 97 + rand() % 26;
    
    // defines random upper case
    u1 = 65 + rand() % 26;
    u2 = 65 + rand() % 26;
    u3 = 65 + rand() % 26;
    u4 = 65 + rand() % 26;
    
    // defines random numbers
    n1 = 48 + rand() % 10;
    n2 = 48 + rand() % 10;
    n3 = 48 + rand() % 10;
    
    // defines random special characters
    s1 = 32 + rand() % 15;
    
    // define unshuffled password - may simplify above with 3 for-loops
    password[0] = l1;
    password[1] = l2;
    password[2] = l3;
    password[3] = l4;
    password[4] = u1;
    password[5] = u2;
    password[6] = u3;
    password[7] = u4;
    password[8] = n1;
    password[9] = n2;
    password[10] = n3;
    password[11] = s1;
    
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
