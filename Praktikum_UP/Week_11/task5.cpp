#include <iostream>
using namespace std;

bool checkIncrease(int* arr, int size)
{
    if (size <= 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return checkIncrease(arr + 1, size - 1);
    }
}

void fillArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
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

    cout << "The elements of the array are sorted in increasing order: " << boolalpha << checkIncrease(arr, size) << endl;

    delete[] arr;
    return 0;
}