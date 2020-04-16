#include <iostream>

//Swap two int values with XOR operator

int main(){
    //Initialize values
    int firstVar, secondVar = 0;

    //Default values
    firstVar = 155;
    secondVar = 788;
    
    // Swap using XOR operator
    ( firstVar ^= secondVar), (secondVar ^= firstVar), (firstVar ^= secondVar);

    //Show after swapping
    std::cout << firstVar << " " << secondVar << std::endl;

    return 0;
}