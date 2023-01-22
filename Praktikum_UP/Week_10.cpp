#include <iostream>
#include <iomanip>
using namespace std;

void arrInput(char* arr, int size)
{
    cin.getline(arr, size + 1);
}

void arrOutput(char* str, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << setw(5) << *(str + i) << " ";
    }
}

int strLen(char* str)
{
    int result = 0;
    while (*str != '\0')
    {
        ++str;
        ++result;
    }
    return result;
}

void strCpy(char* str, char*& destinationStr)
{
    if (destinationStr != nullptr) 
    {
        delete[] destinationStr;
    }

    int size = strLen(str) + 1;
    destinationStr = new char[size];

    for (int i = 0; i < size; ++i)
    {
        *(destinationStr + i) = *(str + i);
    }

    destinationStr[size - 1] = '\0';
}

char* strCat(char* str1, char* str2)
{
    int str1Length = strLen(str1);
    int str2Length = strLen(str2);
    int length = str1Length + str2Length + 1; 
    char* result = new char[length];

    strCpy(str1, result); 

    for (int i = str1Length; i < length; ++i)
    {
        for (int j = 0; j < str2Length; ++j)
        {
            *(result + i) = *(str2 + j);
        }
    }

    result[length - 1] = '\0';

    return result;
}

int main()
{
    int size;
    cout << "Enter the size of the string: ";
    cin >> size;

    char* initialStr = new char[size];
    char* destinationStr = nullptr;

    cin.ignore();

    arrInput(initialStr, size);
    strCpy(initialStr, destinationStr);
    cout << endl;

    cout << "Your new array is: \n";
    arrOutput(destinationStr, size);

    delete[] initialStr;
    delete[] destinationStr;
    initialStr = NULL;
    destinationStr = NULL;

    return 0;
}
