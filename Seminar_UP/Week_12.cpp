#include <iostream>
using namespace std;

int sumOfDigits(int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    return n % 10 + sumOfDigits(n / 10);
}

int recStrlen(const char* str) 
{
    if (*str == '\0') 
    {
        return 0;
    }
    return 1 + recStrlen(++str);
}

int countDigits(int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int pow(int n, int p) 
{
    if (p == 0) 
    {
        return 1;
    }
    if (p == 1) 
    {
        return n;
    }
    return n * pow(n, p - 1);
}

int reverse(int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    return n % 10 * pow(10, countDigits(n) - 1) + reverse(n / 10);
}

int reverse2(int n, int acc = 0) 
{
    if (n == 0) 
    {
        return acc;
    }
    return reverse2(n / 10, acc * 10 + n % 10);
}

void func(char n) 
{
    if (n < 'A') 
    {
        return;
    }

    cout << n << "\n";
    func(n - 1);
    cout << n << "\n";
}

int fibonaciiIter(int n) 
{
    int prev = 0, curr = 1;
    for (; n - 1; --n) 
    {
        curr += prev;
        prev = curr - prev;
    }

    return curr;
}

int fibonacciRec(int n, int prev = 0, int curr = 1) 
{
    if (n == 1) 
    {
        return curr;
    }
    return fibonacciRec(n - 1, curr, curr + prev);
}

int fibonacci(int n) 
{
    if (n < 2)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

bool IsEvenNumber(int);
bool IsOddNumber(int);

bool IsOddNumber(int n)
{
    if (n == 0) {
        return 0;
    }

    return IsEvenNumber(n - 1);
}

bool IsEvenNumber(int n)
{
    if (n == 0) {
        return 1;
    }

    return IsOddNumber(n - 1);
}

int main() 
{
    cout << sumOfDigits(154) << endl;
    cout << recStrlen("fhdsjkfhsdkjaf") << endl;
    cout << reverse2(1234) << endl;
    // func('E');
    cout << IsOddNumber(5) << endl;

    return 0;
}