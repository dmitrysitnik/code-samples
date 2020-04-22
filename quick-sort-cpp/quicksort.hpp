class QuickSort
{
private:
    /* data */
public:
    QuickSort(/* args */);
    ~QuickSort();
    static void quicksort(int arr[], int low, int high);

    private:
     static void swap(int* first, int* second);
     static int partition(int arr[], int low, int high);
};

QuickSort::QuickSort(/* args */)
{
}

QuickSort::~QuickSort()
{
}


void QuickSort::swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int QuickSort::partition(int arr[], int low, int high)
{
    int pivot = arr[high];

    int i = (low - 1); //index of smaller element

    for (int j = low; j <= high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void QuickSort::quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        //separatly sort left and right parts
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}


