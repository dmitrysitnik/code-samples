#include <iostream>
#include "quicksort.hpp"

void PrintArray(int arr[], int arrayLength){
    for (int index = 0; index < arrayLength; index++)
    {
        std::cout << arr[index] << ", ";
    }

    std::cout << std::endl;
}

int main()
{
    //Start values
    int arr[] = {24, 54, 1, 5, 3, 9, 23, 11, 74};
    int arrayLength = sizeof(arr) / sizeof(arr[0]);

    //Run out sorting 
    QuickSort::quicksort(arr, 0, arrayLength - 1);
    std::cout << "Sorted array: \n";

    PrintArray(arr, arrayLength);
    return 0;
}