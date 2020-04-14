#include "polindrom.h"
#include <iostream>
#include <string>
#include <map>

Polindrom::Polindrom(/* args */)
{
}

Polindrom::~Polindrom()
{
}


void Polindrom::testShow(char message[]){
    std::cout << message << std::endl;
}


void Polindrom::SetInput(std::string input){
    mInput = input;
}


void Polindrom::InputLength(){
    std::cout << "length: " << mInput.length() << std::endl;
}



void Polindrom::Process(){
    std::map <char, int>  mapping;
    int maxPolindrom = 0;

    InputLength();
    
    for (int i = 0; i < mInput.length(); i++)
    {
        mapping[mInput[i]]++;
    }

    for (std::map<char, int>::iterator element = mapping.begin(); element != mapping.end(); element++ )
    {
        int possibleInPolidrom = element->second / 2;
        maxPolindrom += possibleInPolidrom;

        std::cout << "1 = " << element->first << std::endl;
        std::cout << "2 = " << element->second << std::endl;

    }

    maxPolindrom *= 2;

    if(mInput.length() % 2 != 0){
        maxPolindrom += 1;
    }
    
    std::cout << "maxPolindrom: " << maxPolindrom << std::endl;
    
}