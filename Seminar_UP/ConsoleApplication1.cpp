// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

const unsigned MAX_SIZE = 100;

void inputArray(int arr[MAX_SIZE], int n)
{
	for (int i = 0; i < MAX_SIZE; ++i)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

void printArray(int arr[MAX_SIZE], int n)
{
	for (int i = 0; i < n && i < MAX_SIZE; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

double Average(int arr[MAX_SIZE], int n)
{
	double sum = 0;
	for (int i = 0; i < n && i < MAX_SIZE; i++)
	{
		sum += arr[i];
	}
	return sum / n;
}

void Reverse(int arr[MAX_SIZE], int n)
{
	for (int i = 0; i < n / 2; ++i)
	{
		int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
	printArray(arr, n);
}

void printReverse(int arr[MAX_SIZE], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << "arr[" << (n - i - 1) << "] = " << arr[n - i - 1] << endl;
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5 };
	printReverse(arr, 5);
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
