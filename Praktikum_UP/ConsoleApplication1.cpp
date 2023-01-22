#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
    // task 1
    // cout << "How many apples, pears and bannas do you want?" << endl;
    // int apples;
    // int pears;
    // int bannas;
    // cout << "Insert how many apples do you want: ";
    // cin >> apples;
    // // Adding pears
    // cout << "Insert how many pears do you want: ";
    // cin >> pears;
    // // Adding bannas
    // cout << "Insert how many bannas do you want: ";
    // cin >> bannas;
    // cout << "You need to buy " << apples << " apples, " << pears << " pears, " << bannas << " bannas." << endl;

    //task 2
    // int n1, n2;
    // cout << "Enter number 1: ";
    // cin >> n1;
    // cout << "Enter number 2: ";
    // cin >> n2;
    // cout << "Sum: " << n1 + n2 << "Difference: " << n1 - n2 << " Product: " << n1 * n2;

    //task 3
    // int seconds;
    // cout << "Seconds: ";
    // cin >> seconds;
    // int days = seconds / 86400;
    // int hours = (seconds % 86400) / 3600;
    // int minutes = (seconds % 86400 % 3600) / 60;
    // seconds = seconds % 86400 % 3600 % 60;
    // cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.";

    //task 4
    // int number, firstDigit, secondDigit, thirdDigit;
    // cout << "Enter a number: ";
    // cin >> number;
    // firstDigit = number / 100;
    // secondDigit = number / 10 % 10;
    // thirdDigit = number % 10;
    // int reverse = (thirdDigit*100) + (secondDigit*10) + firstDigit;
    // // cout << " The reverse number is: " << thirdDigit << secondDigit << firstDigit;
    // cout << "The rev number is: " << reverse << endl;

    //task 5
    int strana;
    int apotema;
    int visochina;
    cout << "Strana: ";
    cin >> strana;
    cout << "Apotema: ";
    cin >> apotema;
    cout << "Visochina: ";
    cin >> visochina;
    double lice_strana = strana * strana;
    double perimeter = strana * 4;
    double licePiramida = (perimeter * apotema)/2 + lice_strana;
    double obemPiramida = (lice_strana*visochina)/3;
    cout << "Lice na piramida: " << licePiramida << endl << "Obem na piramida: " << obemPiramida << endl;

    return 0;
}