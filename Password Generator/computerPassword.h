//
//  computerPassword.h
//  Password Generator
//
//  Created by OG Brown Skin on 7/15/22.
//

#ifndef computerPassword_h
#define computerPassword_h

#include "password.h"

class ComputerPassword: public Password
{
public:
    ComputerPassword();
    ~ComputerPassword();
    
    void GeneratePassword() override;
};

#endif /* computerPassword_h */
