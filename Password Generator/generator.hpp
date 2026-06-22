//
//  generator.hpp
//  Password Generator
//
//  Created by OG Brown Skin on 12/25/21.
//

#ifndef generator_hpp
#define generator_hpp

#include <stdio.h>

/* Types */
typedef enum : int
    {
    PASSWORD_COMPUTER = 1,
    PASSWORD_PHONE,
        
    PASSWORD_CNT
    } Password_Type;

/* Functions */
void driver();
void computer_password();
void phone_password();
void randomize(char* arr);

#endif /* generator_hpp */
