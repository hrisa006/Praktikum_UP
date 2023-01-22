#include <iostream>
using namespace std;

int findNumberFibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return findNumberFibonacci(n - 1) + findNumberFibonacci(n - 2);
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int N = findNumberFibonacci(n);
    cout << "The N-number index of the Fibonacci sequence is: " << N << endl;

    return 0;
}