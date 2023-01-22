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

void minMax(int arr[MAX_SIZE], int n) 
{
    int min = INT32_MAX;
	int max = INT32_MIN;
	int secondMin = INT32_MAX;
	int secondMax = INT32_MIN;
	
    for (int i = 0; i < n; ++i) 
	{
        if (min > arr[i]) 
		{
            min = arr[i];
        }
        if (max < arr[i])
		{
            max = arr[i];
        }
    }

    for (int i = 0; i < n; ++i) 
	{
        if (secondMin > arr[i] && arr[i] != min) 
		{
            secondMin = arr[i];
        }
        if (secondMax < arr[i] && arr[i] != max) 
		{
            secondMax = arr[i];
        }
    }

    cout << min << " " << max << " " << secondMin << " " << secondMax << endl;
}

void duplicates(int arr[MAX_SIZE], int n, int k) 
{
    int counter = 0;
    int pos[MAX_SIZE];
    for (int i = 0; i < n; ++i) 
	{
        if (arr[i] == k) 
		{
            pos[counter] = i;
            ++counter; 
        }
    }
    cout << counter << endl;
    printArray(pos, counter);
}

bool isMirrored(int arr[MAX_SIZE], int n)
{
    for (int i = 0, j = n - 1; i < n / 2 && j > i; ++i, --j) 
	{
        if (arr[i] != arr[j]) 
		{
            return false;
        }
    }
    return true;
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5 };
	// printReverse(arr, 5);
	// printArray(arr, 5);
    // printReverse(arr, 5);

    // int temp[MAX_SIZE];
    // int n = 5;
    // inputArray(temp, n);
    // printArray(temp, n);

    // minMax(arr, 5);
    int arr2[] = {1, 2, 3, 4, 2, 1};
    // duplicates(arr2, 7, 3);
    cout << isMirrored(arr2, 6) << endl;
	
	return 0;
}
