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
    
    for (int i = 0; i < mInput.size(); i++)
    {
        mapping[mInput[i]]++;
    }

    if(mInput.length() % 2 != 0){
        maxPolindrom += 1;
    }

    for (std::map<char, int>::iterator element; element != mapping.end(); element++ )
    {
        int possibleInPolidrom = element->second / 2;
        maxPolindrom += possibleInPolidrom;
    }
    

    std::cout << "maxPolindrom: " << maxPolindrom << std::endl;
    
}