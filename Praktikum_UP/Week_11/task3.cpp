#include <iostream>
#include <cstring>
using namespace std;

const int MAX_SIZE = 256;

bool isPalindrome(char* str, int size)
{
    if (size <= 1)
    {
        return true;
    }
    if (*str == *(str + size - 1))
    {
        return isPalindrome(str + 1, size - 2);
    }
    else
    {
        return false;
    }
}

int main()
{
    char* str = new char[MAX_SIZE];

    cout << "Enter your string: ";
    cin.getline(str, MAX_SIZE);

    int strLength = strlen(str);

    cout << endl;

    cout << "Your string is a palindrome: " << boolalpha << isPalindrome(str, strLength) << endl;

    delete[] str;

    return 0;
}
