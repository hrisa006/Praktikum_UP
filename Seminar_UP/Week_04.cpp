#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //task 1
    /*int weekday;
    cout << "Enter a number (1-7): ";
    cin >> weekday;

    switch (weekday)
    {
        case (1):
            cout << "Monday"; break;
        case (2):
            cout << "Tuesday"; break;
        case (3):
            cout << "Wednesday"; break;
        case (4):
            cout << "Thursday"; break;
        case (5):
            cout << "Friday"; break;
        case (6):
            cout << "Saturday"; break;
        case (7):
            cout << "Sunday"; break;
         default:
            cout << "You have entered wrong number!";
            break;
    }
    cout << endl;*/

    //task 2
    /*int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "The year " << year << " is a leap year." << endl;
            }
            else cout << "The year " << year << " is not a leap year." << endl;
        }
        else cout << "The year " << year << " is a leap year." << endl;
    }
    else cout << "The year " << year << " is not a leap year." << endl;*/

    //task 3
    /*int a, b;
    cout << "Enter a value for a and b: \n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if (a == 0) 
    {
        if (b == 0) {
            cout << "Every x is a solution.\n";
        } 
        else cout << "There is no solution. \n";
    } 
    else 
    {
        cout << "x = " << ((-1) * b) / a << endl;
    }*/

    //task 4
    /*int a, b, c;
    cout << "Enter a value for a, b and c: \n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    double x1, x2, D;
    if (a == 0) 
    {
        cout << "This is not a quadratic equation! \n";
    }
    else 
    {
        D = ((double)b * b) - (4 * a * c);
        if (D < 0) 
        {
            cout << "There is no real solutions :( \n";
        }
        else if (D == 0)
        {
            x1 = ((-1) * (double)b + sqrt(D)) / 2 * (double)a;
            x2 = x1;
            cout << "x1 = x2 = " << x1 << endl;
        }
        else
        {
            x1 = ((-1) * (double)b + sqrt(D)) / (2 * (double)a);
            x2 = ((-1) * (double)b - sqrt(D)) / (2 * (double)a);
            cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    }*/

    //task 5
    int x, y;
    cout << "Enter the coordinates of a point: " << endl;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    if (x == 0 && y == 0) 
    {
        cout << "Your point is the starting point \n";
    } 
    else if (x == 0) 
    {
        cout << "Your point is over the Y-axis \n";
    } 
    else if (y == 0) 
    {
        cout << "Your point is over the X-axis \n";
    } 
    else if (x > 0 && y > 0) 
    {
        cout << "Your point is in the first quadrant \n";
    } 
    else if (x < 0 && y > 0) 
    {
        cout << "Your point is in the second quadrant \n";
    } 
    else if (x < 0 && y < 0) {
        cout << "Your point is in the third quadrant \n";
    }
    else cout << "Your point is in the forth quadrant \n";

    return 0;
}
