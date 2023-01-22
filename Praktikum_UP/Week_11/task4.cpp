#include <iostream>
using namespace std;

int findSum(int* arr, int size)
{
    if (size < 1)
    {
        return 0;
    }
    return *arr + findSum(arr + 1, size - 1);
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
        cout << *(arr + i) << " ";
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

    int sum = findSum(arr, size);

    cout << "The sum of the elements in the array is: " << sum << endl;

    delete[] arr;
    return 0;
}
