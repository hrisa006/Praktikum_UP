#include <iostream>
using namespace std;

bool areEqual(const char* str1, const char* str2)
{
	if (*str1 != *str2)
	{
		return false;
	}
	else if (*str1 == '\0' && *str2 == '\0')
	{
		return true;
	}
	return areEqual(str1 + 1, str2 + 1);
}

int isSmallest(int* arr, int length, int element = INT32_MAX)
{
	if (length == 0)
	{
		return element;
	}
	return isSmallest(arr + 1, length - 1, (*arr < element ? *arr : element));
}

void evaluate(const char* str, int count[3])
{
	if (*str == '\0')
	{
		cout << "Upper case letters: " << count[0] << endl;
		cout << "Lower case letters: " << count[1] << endl;
		cout << "Numbers: " << count[2] << endl;
	}
	if (*str >= 'A' && *str <= 'Z')
	{
		count[0]++;
	}
	else if (*str >= 'a' && *str <= 'z')
	{
		count[1]++;
	}
	else if (*str >= '0' && *str <= '9')
	{
		count[2]++;
	}
	evaluate(str + 1, count);
}

int main()
{
	//task 6
	cout << boolalpha << areEqual("hello", "hello") << endl;
	
	//task 7
	int arr[6] = { 11,4,-2,3,6,7 };
	cout << isSmallest(arr, 6) << endl;

	//task 8
	int count[3];
	evaluate("obichamShopskaSalata66",count);

	return 0;
}