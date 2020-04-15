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

void Polindrom::testShow(char message[])
{
    std::cout << message << std::endl;
}

void Polindrom::SetInput(std::string input)
{
    mInput = input;
}

void Polindrom::InputLength()
{
    std::cout << "length: " << mInput.length() << std::endl;
}

void Polindrom::Process()
{
    std::map<char, int> mapping;
    int maxPolindrom = 0;

    InputLength();

    //Подсчитать кол-во символов в строке
    for (int i = 0; i < mInput.length(); i++)
    {
        mapping[mInput[i]]++;
    }

    std::string polindromString;
    std::string polindromTemp;
    char anyCharWithNoPair;

    for (std::map<char, int>::iterator element = mapping.begin(); element != mapping.end(); element++)
    {
        int possibleInPolidrom = element->second / 2;

        //составляем начальную часть полиндрома или запоминаем нечетный символ
        if (possibleInPolidrom > 0)
        {
            polindromTemp.push_back(element->first);
        }
        else
        {
            anyCharWithNoPair = element->first;
        }

        maxPolindrom += possibleInPolidrom;

        std::cout << "1 = " << element->first << std::endl;
        std::cout << "2 = " << element->second << std::endl;
    }
    //По сути расчитано кол-во символов в половине -> умножим на 2
    maxPolindrom *= 2;

    polindromString = polindromTemp;

    if (mInput.length() % 2 != 0)
    {
        maxPolindrom += 1;
        polindromString.push_back(anyCharWithNoPair);
    }


    for (int i = polindromTemp.length() - 1; i >= 0; i--)
    {
        polindromString.push_back(polindromTemp[i]);
    }
    
    std::cout << "maxPolindrom: " << maxPolindrom << std::endl;
    std::cout << "Polindrom string " << polindromString << std::endl;
}