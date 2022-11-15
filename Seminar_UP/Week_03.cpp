#include <iostream>
using namespace std;

int main()
{
    //task 0
    /*int n, a, b, c;
    cout << "Enter a 3-digit number: "; cin >> n;
    if (n >= 100 && n <= 999)
    {
        a = n / 100;
        b = n / 10 % 10;
        c = n % 10;
        cout << "The S and V of a parallelepiped with sides a= " << a << ", b= " << b << " and c= " << c << " are: " << endl;
        cout << "S= " << 2 * (a * b + a * c + b * c) << ", V= " << a * b * c << endl;
    }
    else cout << "The number doesn't have 3 digits!" << endl;*/

    //task 1
    /*int n;
    cout << "Enter a number: "; cin >> n;
    cout << "Is the number divisible by 2? ";
    if (n % 2 == 0)
    {
        cout << "Yes :)";
    }
    else cout << "No :(";*/

    //task 2
    /*char sign;
    double a, b;
    cout << "Enter an operation (+,-,*,/): "; cin >> sign;
    cout << "Enter two real numbers:\n";
    cout << "a = "; cin >> a; 
    cout << "b = "; cin >> b;

    switch (sign)
    {
        case '+': 
            cout << "a + b = " << a + b << endl; break;
        case '-': 
            cout << "a - b = " << a - b << endl; break;
        case '*': 
            cout << "a * b = " << a * b << endl; break;
        case '/': 
            cout << "a / b = " << a / b << endl; break;
        default: cout << "Invalid Operation :/" << endl;
    }*/

    //task 3
    int n, digit1, digit2, digit3, digit4;
    cout << "Enter a 4-digit number: "; cin >> n;
    if (n >= 1000 && n <= 9999)
    {
        digit1 = n / 1000;
        digit2 = n / 100 % 10;
        digit3 = n / 10 % 10;
        digit4 = n % 10;
        cout << "Does the number have unique digits? ";
        if (digit1 != digit2 && digit1 != digit3 && digit1 != digit4 && digit2 != digit3 && digit2 != digit4 && digit3 != digit4)
        {
            cout << "Yes :)" << endl;
        }
        else cout << "No :(" << endl;
    }
    else cout << "The number you've entered has less or more than the exected amount of digits!!" << endl;

    return 0;
}
