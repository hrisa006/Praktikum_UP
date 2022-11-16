// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int Abs(int n)
{
    return n > 0 ? n : (-1) * n;
}

int pow(int n, int p) //n^p
{
    int power = 1;
    for (int i = 0; i < p; i++)
    {
        power *= n;
    }
    return power;
}

double min(double a, double b)
{
    return a > b ? a : b;
}

int minInt(int a, int b)
{
    return a > b ? a : b;
}

long max(long a, long b)
{
    return a > b ? a : b;
}

int MinOfThree(int a, int b, int c)
{
    return minInt(a, minInt(b, c));
}

long MaxOfThree(long a, long b, long c)
{
    return max(max(a, b), c);
}

bool isLower(char c)
{
    return c >= 'a' && c <= 'z';
}

bool isLetter(char c);
bool isUpper(char c)
{
    if (isLetter(c) == true) 
    {
        return c >= 'A' && c <= 'Z';
    }
    else 
    {
        cout << "The symbol '" << c << "' is not a letter \n";
        return false;
    }
    //return c >= 'A' && c <= 'Z';
}

bool isLetter(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isDigit(char c)
{
    return c >= 0 && c <=9;
}

char toUpper(char c)
{
    if (isLower(c))
    {
        return c - ('a' - 'A');
    }
    return c;
}

char toLower(char c)
{
    if (isUpper(c))
    {
        return c + ('a' - 'A');
    }
    return c;
}

int countDigit(int n, int d) 
{
    int counter = 0;
    while (n > 0) 
    {
        if (n % 10 == d) 
        {
            ++counter;
        }
        n /= 10;
    }
    return counter;
}

bool isPrime(int n) 
{
    for (int i = 2; i < sqrt(n); ++i) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    return true;
}

bool isDoublePrimes(int a, int b) 
{
    return isPrime(a) && isPrime(b) && a + 2 == b;
}

int main()
{
    //task 0
   /* int n;
    cout << "Enter n: ";
    cin >> n;
    int br = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int fact = 1;
            for (int k = 1; k <= br; k++)
            {
                if (br == 0)
                {
                    fact = 1;
                    break;
                }
                fact *= k;
            }
            br++;
            cout << fact << " ";
        }cout << endl;
    }*/

    //task 2
    //cout << Abs(-1) << endl;
    //cout << pow(2, 3) << endl;
    //cout << min(1, 3) << endl;
    //cout << max(1, 3) << endl;
    //cout << minOfThree(1, 5, 9) << endl;
    //cout << maxOfThree(1, 5, 9) << endl;
    //cout << boolalpha << isLower('A') << endl;
    //cout << boolalpha << isUpper('a') << endl;
    //cout << boolalpha << isLetter('-') << endl;
    //cout << boolalpha << isDigit('0') << endl;
    //cout << toLower('R') << endl;
    //cout << toUpper('e') << endl;

    //task 3
    //cout << countDigit(111223, 1) << endl;

    //task 4
    cout << isDoublePrimes(11, 13) << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
