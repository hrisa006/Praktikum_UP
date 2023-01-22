#include <iostream>
using namespace std;

int findMin(int* arr, int size)
{
    if (size == 1)
    {
        return *arr;
    }
    int min = findMin(arr + 1, size - 1);

    return (*arr < min) ? *arr : min;
}

void fillArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> *(arr + i);
    }
    cout << endl;
}

void arrOutput(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << *(arr + i) << "   ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];
    fillArray(arr, size);
    cout << endl;

    cout << "Your array is: \n";
    arrOutput(arr, size);
    cout << endl;

    int minElement = findMin(arr, size);
    cout << "The minimum element of your array is: " << minElement << endl;

    delete[] arr;
    
    return 0;
}