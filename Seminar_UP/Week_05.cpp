#include <iostream>
using namespace std;

int main()
{
    //task 0
    /*int number;
    cout << "Enter number: ";
    cin >> number;
    int first = number / 1000;
    int second = number / 100 % 10;
    int third = number % 100 / 10;
    int forth = number % 10;

    if (first == 5 || second == 5 || third == 5 || forth == 5)
    {
        if (forth == 5 || forth == 0)
        {
            cout << "The number contains 5 and is divisible by 5. \n";
        }
        else {
            cout << "The number contains 5 and is not divisible by 5. \n";
        }
    }
    else if (number % 2 == 0)
    {
        cout << "The number does not contain 5 and it is even. \n";
    }
    else if (number % 2 != 0)
    {
        cout << "The number does not contain 5 and it is not even. \n";
    }*/

    //task 1
    /*int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = n; i >= 0; --i)
    {
        i *= i - 1;
    }
    cout << n << endl;
    int result = 1;
    for (int i = 2; i <= n; ++i)
    {
        result *= i;
    }
    cout << "n! = " << result << endl;
    */

    //task 2
    /*int number;
    cout << "Enter random numbers: \n";
    int sum = 0;
    do {
        cin >> number;
        sum += number;
    } while (number); //number!=0
    cout << "The sum = " << sum << endl;
    */

    //task 3
    /*int number;
    cout << "Enter a number: ";
    cin >> number;
    int sum = 0;
    while (number)
    {
        sum += number % 10;
        number /= 10;
    }
    cout << "The sum of digits is " << sum << endl;
    */ 
    
    //task 4
    /*int number;
    cout << "Enter a number: ";
    cin >> number;
    bool flag = false;
    if (number == 1)
    {
        cout << "The number is not prime \n";
        flag = true;
    }
    for (int i = 2; i < number; ++i)
    {
        if (number % i == 0)
        {
            cout << "The numbe is not prime \n";
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "The number is prime \n";
    }*/

    //task 4*
    /*int number;
    cout << "Enter anumber: ";
    cin >> number;
    bool flag = false;
    for (int i = 2; i <= number; ++i)
    {
        flag = false;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << i << " ";
        }
    }
    cout << endl;*/

    //task 5 - Fibonacci numbers
    /*int number, n1, n2, n3;
    cout << "Enter the number of elements: ";
    cin >> number;
    n1 = 0; n2 = 1;
    cout << n1 << " " << n2 << " "; 
    for (int i = 2; i < number; ++i)    
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }*/

    //task 6
    int n;
    cout << "Enter n: ";
    cin >> n;
    int counter = 0;

    while (n>0)
    {
        for (int i = 0; i < counter; ++i)
        {
            cout << "- ";
        }
        for (int i = n; i > 0; i--)
        {
            cout << "+ ";
        }
        cout << endl;
        counter++;
        n--;
    }
    cout << endl;

    return 0;
}
