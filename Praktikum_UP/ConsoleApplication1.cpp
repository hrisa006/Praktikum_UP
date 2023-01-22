#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    //task 1
    int month, year;
    cout << "Enter month and year: ";
    cin >> month >> year;

    switch (month) 
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: 
        {
            cout << "31 days" << endl;
        }
           break;
        case 4:
        case 6:
        case 9:
        case 11:
        {
            cout << "30 days" << endl;
        }
           break;
        case 2:
        {
            if (year % 4 == 0)
            {
                if (year % 100 == 0)
                {
                    if (year % 400 == 0) 
                    {
                        cout << "29 days" << endl;
                    }
                    else 
                    {
                        cout << "28 days" << endl;
                    }
                }
                else 
                {
                    cout << "29 days" << endl;
                }
            }
            else 
            {
                cout << "28 days" << endl;
            }
        }
    }

    //task 2
    int n;
    cout << "Enter a number: ";
    cin >> n;

    switch (n) 
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7: 
        {
            cout << "0 holes" << endl;
        }
        case 0:
        case 6:
        case 9: 
        {
            cout << "1 holes" << endl;
        }
        case 8: 
        {
            cout << "2 holes" << endl;
        }
    }

    switch (n) 
    {
        case 0: 
        {
            cout << "Zero" << endl;
        }
              break;
        case 1: 
        {
            cout << "One" << endl;
        }
              break;
        case 2: 
        {
            cout << "Two" << endl;
        }
              break;
        case 3: 
        {
            cout << "Three" << endl;
        }
              break;
        case 4: 
        {
            cout << "Four" << endl;
        }
              break;
        case 5: 
        {
            cout << "Five" << endl;
        }
              break;
        case 6: 
        {
            cout << "Six" << endl;
        }
              break;
        case 7: 
        {
            cout << "Seven" << endl;
        }
              break;
        case 8: 
        {
            cout << "Eight" << endl;
        }
              break;
        case 9: 
        {
            cout << "Nine" << endl;
        }
              break;
    }

    //task 3
    int checkYear;
    cout << "Enter year: ";
    cin >> checkYear;
    if (checkYear % 4 == 0) 
    {
        if (checkYear % 100 == 0) 
        {
            if (checkYear % 400 == 0)
            {
                cout << "The year " << checkYear << " is leap" << endl;
            }
            else
            {
                cout << "The year " << checkYear << " is not leap" << endl;
            }
        }
        else 
        {
            cout << "The year " << checkYear << " is leap" << endl;
        }
    }
    else
    {
        cout << "The year " << checkYear << " is not leap" << endl;
    }

    //task 4
    int first, second, third;
    cout << "Enter three numbers: ";
    cin >> first >> second >> third;
    bool existsTriangle = first > 0
        && second > 0
        && third > 0
        && (first + second > third)
        && (first + third > second)
        && (second + third > first);
    cout << boolalpha << existsTriangle << endl;

    //task 5
    //a)
    int p;
    cout << "Enter a number: ";
    cin >> p;
    bool t5a = p % 4 == 0 || p % 7 == 0;
    cout << boolalpha << t5a << endl;
    //б)
    cout << "________________________________________\n";
    int a, b, c;
    cout << "Enter a, b, c for a*x^2 + b*x + c = 0: ";
    cin >> a >> b >> c;
    bool noRealResult = (b * b - 4 * a * c) < 0;
    cout << boolalpha << noRealResult << endl;
    //в)
    cout << "________________________________________\n";
    int xa, xb;
    cout << "Enter point coordinates: ";
    cin >> xa >> xb;
    bool inCircle = sqrt((xa - 0) * (xa - 0) + (xb - 1) * (xb - 1)) <= 5;
    cout << boolalpha << inCircle << endl;
    //г)
    cout << "_________________________________________\n";
    int x1, y1, x2, y2, r;
    cout << "Enter coordinates for first point: ";
    cin >> x1 >> y1;
    cout << "\nEnter coordinates for secind point: ";
    cin >> x2 >> y2;
    cout << "\nEnter radius: ";
    cin >> r;
    bool isInCircle = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) <= r;
    cout << boolalpha << isInCircle << endl;
    //д)
    cout << "__________________________________________\n";
    int xd, yd;
    cout << "Enter coordinates for point: ";
    cin >> xd >> yd;
    bool inThirdQuadrant = sqrt((xd - 0) * (xd - 0) + (yd - 0) * (yd - 0)) <= 5 && xd < 0 && yd < 0;
    cout << boolalpha << inThirdQuadrant << endl;
    //е)
    cout << "___________________________________________\n";
    int xe, ye;
    cout << "Enter coordinates for point: ";
    cin >> xe >> ye;
    double distance = sqrt((xe - 0) * (xe - 0) + (ye - 0) * (ye - 0));
    bool inWreath = distance > 5 && distance < 10;
    cout << boolalpha << inWreath << endl;
    //ж)
    cout << "_____________________________________________\n";
    int x;
    cout << "Enter x: ";
    cin >> x;
    bool onLine = x >= 0 && x <= 1;
    cout << boolalpha << onLine << endl;
    //з)
    cout << "______________________________________________\n";
    int firstNumber, secondNumber, thirdNumber, xNumber;
    cout << "Enter four numbers: ";
    cin >> firstNumber >> secondNumber >> thirdNumber >> xNumber;
    bool isMax = firstNumber > secondNumber && firstNumber > thirdNumber && xNumber == firstNumber ? true :
        secondNumber > firstNumber && secondNumber > thirdNumber && xNumber == secondNumber ? true :
        xNumber == thirdNumber ? true : false;
    cout << boolalpha << isMax << endl;
    // и)
    cout << "_________________________________________________\n";
    cout << "Enter four numbers: ";
    cin >> firstNumber >> secondNumber >> thirdNumber >> xNumber;
    bool isNotMax = firstNumber > secondNumber && firstNumber > thirdNumber && (xNumber < firstNumber || xNumber > firstNumber) ? true :
        secondNumber > firstNumber && secondNumber > thirdNumber && (xNumber < secondNumber || xNumber > secondNumber) ? true :
        (xNumber < thirdNumber || xNumber > thirdNumber) ? true : false;
    cout << boolalpha << isNotMax << endl;
    //к)
    cout << "___________________________________________________\n";
    bool one, two;
    cout << "Enter two times true or false: ";
    cin >> one >> two;
    bool three = one || two;
    cout << boolalpha << three << endl;
    //л)
    cout << "____________________________________________________\n";
    cout << "Enter two times true or false: ";
    cin >> one >> two;
    three = one && two;
    cout << boolalpha << three << endl;
    //м)
    cout << "____________________________________________________\n";
    int y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    bool isPositive = x < 0 && y < 0 && z < 0;
    cout << boolalpha << isPositive << endl;
    //н)
    cout << "___________________________________________________\n";
    cout << "Enter three-digit number: ";
    cin >> p;
    bool isSevenInNumber = p / 100 == 7 || p / 10 % 10 == 7 || p % 10 == 7;
    cout << boolalpha << isSevenInNumber << endl;
    //о)
    cout << "___________________________________________________\n";
    int k;
    cout << "Enter three-digit number: ";
    cin >> k;
    bool isDifferentDigits = k / 100 != k / 10 % 10 && k / 10 % 10 != k % 10;
    cout << boolalpha << isDifferentDigits << endl;
    //п)
    cout << "__________________________________________________\n";
    int t;
    cout << "Enter three-digit number: ";
    cin >> t;
    int tFirst, tSecond, tThird;
    tFirst = t / 100;
    tSecond = t / 10 % 10;
    tThird = t % 10;
    bool equalDigits = tFirst == tSecond ? true : tFirst == tThird ? true : tSecond == tThird ? true : false;
    cout << boolalpha << equalDigits << endl;

    return 0;
}