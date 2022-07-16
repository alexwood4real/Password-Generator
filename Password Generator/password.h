//
//  password.h
//  Password Generator
//
//  Created by OG Brown Skin on 7/15/22.
//

#include <iostream>

class Password
{
private:
    char thePassword[12];
    
public:
    virtual void GeneratePassword() = 0;
    void RandomizePassword(char*);
    void PrintPassword(std::string*);
};


void Password::RandomizePassword(char* arr)
{
    srand(time(NULL)); // uses different value every time - has warning
    for(int i = 11; i > 0; i--)
    {
        int j = rand() % (i+1);
        std::swap(arr[i], arr[j]);
    }
}

void Password::PrintPassword(std::string* password)
{
    std::cout << password;
}
