#include <iostream>
using namespace std;

double findSum(double* arr, int size)
{
    if (size < 2)
    {
        return 0.0;
    }
    if ((*arr >= 0) && (*arr > *(arr + 1)))
    {
        return *arr + findSum(arr + 1, size - 1);
    }
    else
    {
        return findSum(arr + 1, size - 1);
    }
}

void fillArray(double* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << "arr[" << i << "] = ";
        cin >> *(arr + i);
    }
    cout << endl;
}

void arrOutput(double* arr, int size)
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
    double* arr = new double[size];

    fillArray(arr, size);

    cout << endl;

    cout << "Your array is: \n";
    arrOutput(arr, size);

    cout << endl;

    double sum = findSum(arr, size);

    cout << "The sum is: " << sum << endl;

    delete[] arr;

    return 0;
}
