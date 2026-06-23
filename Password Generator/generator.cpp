
//  generator.cpp
//  passwordGenerator
//
//  Created by OG Brown Skin on 12/24/21.
//
#include <algorithm>
#include <random>

#include "generator.hpp"
#include "iostream"

/* static functions */
static void shuffle( char* array );

/* computer password constants constants */
constexpr std::size_t SIZE = 12;
constexpr std::size_t SPECIAL_IDX = 0;
constexpr std::size_t LOWER_IDX = 1;
constexpr std::size_t UPPER_IDX = 5;
constexpr std::size_t NUM_IDX = 9;

/* holds valid special characters - only 7 for smooth modular arithmatic */
static char special[] = {'!', '@', '#', '$', '%', '^', '&'};

void driver()
    {
    std::cout << "Welcome!\n";
    int choice = 0;
    
    /* will run until exit */
    while( true )
        {
        std::cout << "Press 1 to generate a computer password.\n"
                  << "Press 2 to generate a phone password.\n"
                  << "Press any other key to quit.\n";
            
        std::cin >> choice;
        
        /* generates password */
        switch( choice )
            {
            case PASSWORD_COMPUTER:
                computer_password();
                break;
                    
            case PASSWORD_PHONE:
                phone_password();
                break;
                    
            default:
                exit( 0 );
            } /* end of switch-statement */
        } /* end of while-loop */
    } /* close driveFunction */

void computer_password()
    {
    /* array used to hold the characters of password */
    char password[ SIZE + 1 ];
    password[ SIZE ] = '\0';
    
    /* special character */
    password[ SPECIAL_IDX ] = special[ rand() % 7 ];
    
    /* lower case letters */
    for( int i = LOWER_IDX; i < UPPER_IDX; i++ )
        {
        password[ i ] = 'a' + ( rand() % 26 );
        }
    
    /* upper case letters */
    for( int i = UPPER_IDX; i < NUM_IDX; i++ )
        {
        password[ i ] = 'A' + ( rand() % 26 );
        }
    
    /* numbers */
    for( int i = NUM_IDX; i < SIZE; i++ )
        {
        password[ i ] = '0' + ( rand() % 10 );
        }
    
    /* shuffle characters */
    shuffle( password );
    
    std::cout << "Your password is: " << password << "\n";
    } /* computer_password() */

void phone_password()
    {
    int size;
    
    std::cout << "How long would you like your password?\n";
    std::cin >> size;
    
    char cell_password[ size + 1 ];
    cell_password[ size ] = '\0';
    
    /* pick random number */
    for( int i = 0; i < size; i++ )
        {
        cell_password[ i ] = ( '0' + ( rand() % 10 ) );
        }
    
    std::cout << "Your phone password is: " << cell_password << "\n";
    
    } /* phone_password() */

/* static functions */
static void shuffle( char* arr )
    {
    /* hardware-based truly random seed */
    std::random_device rd;

    /* feed the seed into the Mersenne Twister engine */
    std::mt19937 engine( rd() );

    /* inclusive range of randong number */
    std::uniform_int_distribution<int> dist( 0, SIZE - 1 );

    for( int i = SIZE - 1; i > 0; i-- )
        {
        int j = dist( engine );
        std::swap( arr[ i ], arr[ j ] );
        }
    } /* shuffle */
