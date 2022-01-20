#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n = 6;
    int arr[n] = {10, 1, 7, 6, 14, 9};

    cout << "Before bubble sort the array is ";
    printArray(arr, n);

    bubbleSort(arr, n);
    cout << endl;

    cout << "After bubble sort the array is ";
    printArray(arr, n);
    return 0;
}