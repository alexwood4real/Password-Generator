
//  generator.cpp
//  passwordGenerator
//
//  Created by OG Brown Skin on 12/24/21.
//
#include <algorithm>
#include <vector>

#include "generator.hpp"
#include "iostream"

/* holds valid special characters - only 7 for smooth modular arithmatic */
static char special[] = {'!', '@', '#', '$', '%', '^', '&'};

// function when program opens
void driver()
    {
    std::cout << "Welcome!\n";
    int choice = 0;
    
    /* will run until exit */
    while( true )
        {
        std::cout << "Press 1 to generate a computer password.\n"
                  << "Press 2 to generate a phone password.\n";
            
        std::cin >> choice;
        
        /* generates password */
        switch( choice )
            {
            case PASSWORD_PHONE:
                phone_password();
                break;
                    
            case PASSWORD_COMPUTER:
                computer_password();
                break;
                    
            default:
                exit( 0 );
            } /* end of switch-statement */
        } /* end of while-loop */
    } /* close driveFunction */

void computer_password()
    {
    // array used to hold the characters of password - will be shuffled
    char password[ 12 ];
    
    // adds special character
    password[ 0 ] = special[ rand() % 7 ];
    
    // adds lower case
    for( int i = 1; i < 5; i++ )
        {
        password[ i ] = 97 + ( rand() % 26 );
        }
    
    // adds upper case
    for( int i = 5; i < 9; i++ )
        {
        password[ i ] = 65 + ( rand() % 26 );
        }
    
    // adds numbers
    for( int i = 9; i < 12; i++ )
        {
        password[ i ] = 48 + ( rand() % 10 );
        }
    
    // randomize passoword - error here need to fix, is this doing anything?
    randomize( password );
    
    // convert to string
    std::string password_string = "";
    for( int i = 0; i < 12; i++ )
        {
        password_string += password[ i ];
        }
    
    std::cout << "Your password is: " << password_string << "\n";
    } /* computer_password() */

void phone_password()
    {
    // will hold phone password - creates new vector every time
    std::vector<char> cell_password;
    int size;
    
    std::cout << "How long would you like your password?\n";
    std::cin >> size;
    
    // generates random password of integers, doesn't need randomize
    for( int i = 0; i < size; i++ )
        {
        cell_password.push_back( 48 + ( rand() % 10 ) );
        }
    
    // convert to string
    std::string password_string = "";
    
    // makes vector into password string
    for( int i = 0; i < cell_password.size(); i++ )
        {
        password_string += cell_password[ i ];
        }
    
    std::cout << "Your phone password is: " << password_string << "\n";
    
    } /* phone_password() */

void randomize( char* arr )
    {
    srand( time(NULL) ); // uses different value every time - has warning
    for( int i = 11; i > 0; i-- )
        {
        int j = rand() % ( i + 1 );
        std::swap( arr[ i ], arr[ j ] );
        }
    } /* randomize */
