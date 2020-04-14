#include "polindrom.h"
#include <iostream>

Polindrom::Polindrom(/* args */)
{
}

Polindrom::~Polindrom()
{
}


void Polindrom::testShow(char message[]){
    std::cout << message << std::endl;
}


void Polindrom::SetInput(char* input){
    mInput = input;
}


void Polindrom::InputLength(){
   std::cout << strlen(mInput) << std::endl;
}