//
//  main.cpp
//  passwordGenerator
//
//  Created by OG Brown Skin on 12/24/21.
//

#include <iostream>
#include "generator.hpp"

int main(int argc, const char * argv[])
{
    /**
     main.cpp will call one function in generator.cpp that will fire up the program.
     What I envision is to call a driving function that asks if you need to generate a new password or recover one
     If recover, it reaches into some data base and decrypts it and returns it,
     but if you need to make a new one, it generates a 12 character string that has:
     1. 3 lower case
     2. 3 upper case
     3. 3 numbers
     4. and 3 special characters
     creating this function will be the first goal. The second one will be to save it and pull it in general. Then, I will work on encryption.
     */
    
    
    // Making a change here to test
    
    // driveFunction();
}
