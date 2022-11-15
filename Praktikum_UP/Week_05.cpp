#include <iostream>
using namespace std;

int main()
{
    //task 1
    /*int number;
    cout << "Enter a number of two digits: ";
    cin >> number;
    while (number < 10 || number >= 100)
    {
        cout << "Enter a number of two digits: ";
        cin >> number;
    }*/

    //task 3
    /*int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = n; i > 1; --i) 
    {
        n *= i - 1;
    } cout << "number! = " << n << endl;*/

    //task 4
    /*int br = 0;
    cout << "The three-digit numbers with special digits are: " << endl;
    for (int i = 100; i <= 987; i++)
    {
        int number = i;
        int digit1 = number % 10;
        number /= 10;
        int digit2 = number % 10;
        number /= 10;
        int digit3 = number % 10;

        if(digit1 != digit2 && digit1 != digit3 && digit2 != digit3)
        {
            cout << i << " ";
            br++;
        }
    }
    cout << "\n" << endl;
    cout << "Their count is: " << br << endl;*/
    

    //task 5
    cout << "The numbers that are devided by their digit multiplication are: " << endl;
    for (int i = 100; i < 1000; i++)
    {
        int number = i;
        int digit1 = number % 10;
        number /= 10;
        int digit2 = number % 10;
        number /= 10;
        int digit3 = number % 10;

        if (digit1 != 0 && digit2 != 0 && digit3 != 0)
        {
            if (i % (digit1 * digit2 * digit3) == 0)
            {
                cout << i << " ";
            }
        }
    } cout << endl;
    
    return 0;
}
