#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //task 1
    // int firstNumber, secondNumber, thirdNumber;
    // cout << "First number";
    // cin >> firstNumber;
    // cout << "Second number";
    // cin >> secondNumber;
    // cout << "Third number";
    // cin >> thirdNumber;
    // cout << firstNumber + secondNumber + thirdNumber;

    //task 2
    // int xA, xB, yA, yB;
    // cin >> xA >> xB >> yA >> yB;
    // int dist = sqrt((xB -xA)*(xB - xA)+(yB -yA)*(yB - yA));
    // cout << "Distance: " << dist;

    //task 3
    // cout << "Vhod: " << "\n" << "firstNumber: ";
    // double a,b,x;
    // cin >> a;
    // cout << "secondNumber: ";
    // cin >> b;
    // x=a;
    // a=b;
    // b=x;
    // cout << "Izhod: " << "\n"
    //  << "firstNumber: "
    //  << a << "\n" << "secondNumber: "
    //  << b;

    //task 4
    int number, sum = 0;
    cout << "input number: ";
    cin >> number;
    sum = sum + (number % 10);
    cout << number % 10 << endl;
    number = number / 10;
    sum = sum + (number % 10);
    cout << number % 10 << endl;
    number = number / 10;
    sum = sum + (number % 10);
    cout << number % 10 << endl;
    number = number / 10;
    cout << "sum of digits: " << sum << endl;

    return 0;
}