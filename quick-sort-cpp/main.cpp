#include <iostream>
#include "quicksort.hpp"

void swap2(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int partition2(int arr[], int low, int high)
{
    int pivot = arr[high];

    int i = (low - 1); //index of smaller element

    for (int j = low; j <= high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap2(&arr[i], &arr[j]);
        }
    }
    swap2(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quicksort2(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition2(arr, low, high);

        //separatly sort left and right parts
        quicksort2(arr, low, pi - 1);
        quicksort2(arr, pi + 1, high);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort2(arr, 0, n - 1);
    std::cout << "Sorted array: \n";
    printArray(arr, n);

    int arr2[] = {24, 54, 1, 5, 3, 9, 23, 11, 74};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    QuickSort::quicksort(arr2, 0, n2 - 1);
    std::cout << "Sorted array: \n";
    printArray(arr2, n2);

    return 0;
}