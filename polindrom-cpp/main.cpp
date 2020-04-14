#include <iostream>
#include "polindrom.h"

int main(){
    Polindrom* polindrom = new Polindrom();

    std::string input;
    std::cin >> input;

    polindrom->SetInput(input);
    polindrom->Process();

    return 0;
}