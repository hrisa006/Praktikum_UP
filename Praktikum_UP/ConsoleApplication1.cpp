#include <iostream>
using namespace std;

//task 1
//int** createMatrix(int rows, int cols)
//{
//	int** matrix = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		matrix[i] = new int[cols];
//	}
//	return matrix;
//}
//
//void deleteMatrix(int** matrix, int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		delete[]matrix[i];
//	}
//	delete[]matrix;
//}
//
//void inputMatrix(int** matrix, int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> matrix[i][j];
//		}
//		cout << endl;
//	}
//}
//
//int sumOfRow(int* rows, int cols)
//{
//	int sum = 0;
//	for (int i = 0; i < cols; i++)
//	{
//		sum += rows[i];
//	}
//	return sum;
//}
//
//void sortMatrix(int**& matrix, int rows, int cols)
//{
//	for (int i = 0; i < rows - 1; i++)
//	{
//		for (int j = i + 1; j < rows; j++)
//		{
//			if (sumOfRow(matrix[i], cols) > sumOfRow(matrix[j], cols));
//			{
//				int* temp = matrix[i];
//				matrix[i] = matrix[j];
//				matrix[j] = temp;
//			}
//		}
//	}
//}
//
//void printMatrix(int** matrix, int rows, int cols)
//{
//	for (int row = 0; row < rows; row++)
//	{
//		for (int col = 0; col < cols; col++)
//		{
//			cout << matrix[row][col] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int rows, cols;
//	cin >> rows;
//	cin >> cols;
//	int** matrix = createMatrix(rows, cols);
//	inputMatrix(matrix, rows, cols);
//	sortMatrix(matrix, rows, cols);
//	printMatrix(matrix, rows, cols);
//	deleteMatrix(matrix, rows, cols);
//}


//task 2
//void modifyMessage(char* message)
//{
//    for (int i = 0; message[i] != '\0'; i++)
//    {
//        if (message[i] >= 'a' && message[i] <= 'z')
//        {
//            message[i] -= ('a' - 'A');
//        }
//        else if (message[i] >= 'A' && message[i] <= 'Z')
//        {
//            message[i] += ('a' - 'A');
//        }
//    }
//}
//
//int main()
//{
//    char message[100];
//    cout << "Enter a message: ";
//    cin >> message;
//
//    modifyMessage(message);
//    cout << "Your modified message is: " << message << endl;
//
//    return 0;
//}


//task 5 with two Z
//void printAlphabet(char letter)
//{
//	cout << letter << endl;
//	if (letter >= 'A' && letter < 'Z')
//	{
//		printAlphabet(letter + 1);
//	}
//	cout << letter << " ";
//}
//
//int main()
//{
//	char letter = 'A';
//	printAlphabet(letter);
//	return 0;
//}

//task 5 with one Z
void printAlphabet(char letter)
{
	cout << letter << " ";
	if (letter >= 'A' && letter < 'Z')
	{
		printAlphabet(letter + 1);
	}
	letter--;
	if (letter == '@')
	{
		letter = '\0';
	}
	cout << letter << " ";
}

int main()
{
	char letter = 'A';
	printAlphabet(letter);
	return 0;
}