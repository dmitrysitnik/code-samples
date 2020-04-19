#include <iostream>


#include <iostream>
#include "mybinary.cpp"


int main(){

    int array[] = {1,2,3,4,5};

    int index = MyBinarySearch::Search(array, 3, 5);

    std::cout << "Result is: " << index << std::endl;

    return 0;
}