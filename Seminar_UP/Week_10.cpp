#include <iostream>
using namespace std;

void sumIt(const int& numL, const int& numR, int& sum)
{
    sum = numL + numR;
}

int main() 
{
    // int* p1 = new int(5);
    // int** p2 = &p1;

    // cout << p2 << endl;
    // cout << *p2 << endl;
    // cout << **p2 << endl;

    // cout << (p2 - &p1) << endl;

    // int* arr = new int[10];
    // int* p = &arr[0];
    // int* p2 = &arr[7];

    // cout << p2 - p << endl;

    // delete p1;
    // cout << **p2 << endl;

    int*** cube = new int** [10];
    for (int i = 0; i < 10; i++) 
    {
        cube[i] = new int* [10];
        for (int j = 0; j < 10; j++) 
        {
            cube[i][j] = new int[10];
        }
    }

    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            delete[] cube[i][j];
        }
        delete[] cube[i];
    }
    delete[] cube;

    return 0;
}