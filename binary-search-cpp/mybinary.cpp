#include "mybinary.hpp"
#include <cstdio>
#include <iostream>
#include <iterator>

MyBinarySearch::MyBinarySearch(/* args */)
{
}

MyBinarySearch::~MyBinarySearch()
{
}

void MyBinarySearch::Test()
{
}

int MyBinarySearch::Search(int array[], int number, int arraySize)
{   
    int middle = (arraySize - 1)/ 2;

    if (array[middle] == number){
        return middle;
    }

    else if(arraySize == 1){
        return -1;
    }

    else if(array[middle] > number){

        int* arrayLeft= new int[10];
        int leftArraySize = 0;

        for (int i = 0; i < middle; i++)
        {
            arrayLeft[i] = array[i];
            leftArraySize++;
        }

        //Binary in a left part 
        return Search(arrayLeft, number, leftArraySize);
        
    }

    else{

        int* arrayRight = new int[10];
        int arrayRightSize = 0;
        int rightArrayIndex = 0;

        for (int i = middle + 1; i < arraySize; i++)
        {
            arrayRight[rightArrayIndex] = array[i];
            arrayRightSize++;
            rightArrayIndex++;
        }

        //Binary in a right part
        return middle + 1 + Search(arrayRight, number, arrayRightSize);

    }
    
    
    
}