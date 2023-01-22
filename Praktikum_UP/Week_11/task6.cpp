#include <iostream>
using namespace std;

bool powerOF2(int n)
{
    if (n == 1)
    {
        return true;
    }
    else if (n % 2 != 0 || n < 1)
    {
        return false;
    }
    else
    {
        return powerOF2(n / 2);
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Your number is a power of two: " << boolalpha << powerOF2(n) << endl;

    return 0;
}