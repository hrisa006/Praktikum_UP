#include <iostream>
using namespace std;

int main()
{
    //task 1
    /* int firstNumber, secondNumber;
    cout << "First number: ";
    cin >> firstNumber;
    cout << "Second number: ";
    cin >> secondNumber;
    // if (firstNumber > secondNumber) {
    //     cout << "The bigger number is: " << firstNumber;
    // }
    // else {
    //     cout << "The bigger number is: " << secondNumber;
    // }
    cout << (firstNumber > secondNumber)? firstNumber : secondNumber; */

    //task 2
    // int month;
    // cout << "Enter a valid month: ";
    // cin >> month;
    // /* if (month < 1 && month > 12) {
    //     cout << "Invalid month.";
    // }
    // else {
    //     cout << "Valid month. ";
    // } */
    // cout << (month >=1 && month <=12)? true : false; // 1 = Valid month, 0 = Invalid

    //task 3
    // int a, b, x;
    // cout << "Enter a"<<endl;
    // cin >> a;
    // cout << "Enter b"<<endl;
    // cin >> b;
    // cout << "Enter x"<<endl;
    // cin >> x;
    // if(x< a && x>b)
    // {
    //     cout << "Out"<<endl;
    // }
    // else
    // {
    //     cout<<"In"<<endl;
    // }
    //Ternary
    // cout<< (x > a && x < b)? "In":"Out";
	
	//task 4
	//char a;
	//cout << "Enter a symbol:";
	//cin >> a;
	//if((a <= 'a' && a >= 'z' ) || (a <= 'A' && a >= 'Z'))
	//{
	//	  cout << "The symbol is a letter :)";
	//}
	//else{
	//	 cout << "The symbol is not a letter :(";
	//}
	
	//task 5
	/*int a, b;
	cout << "Enter number1:";
	cin >> a;
	cout << "Enter number2:";
	cin >> b;
	if(a>0)
	{
		if(b>0)
		{
			cout<< "Both numbers are positive";
		}
		else cout << "Only one is positive";
	}else cout << "Both are negative";*/
	
	//task 6
	/*int a;
	cout << "Enter a number:";
	switch(a)
	{
		case 1:cout<<"January"; break;
		case 2:cout<<"February"; break;
		case 3:cout<<"March"; break;
		case 4:cout<<"April"; break;
		case 5:cout<<"May"; break;
		case 6:cout<<"June"; break;
		case 7:cout<<"July"; break;
		case 8:cout<<"August"; break;
		case 9:cout<<"September"; break;
		case 10:cout<<"October"; break;
		case 11:cout<<"November"; break;
		case 12:cout<<"December"; break;
		default:cout<<"The number doesn't belong to a month"; break;
	}*/
	
	//task 7
	int n, m, k;
	cout << "Enter the size of the chocolate: (n x m)";
	cout << "Enter n:";
	cin >> n;	
	cout << "Enter m:";
	cin >> m;	
	cout << "Enter the number of chocolate bars:";
	cin >> k;	
	if(k%n == 0 || k%m == 0)\
	{
		cout << "Chocolate can be broken" << endl;
	}
	else cout << "Chocolate can't be broken" << endl;
}