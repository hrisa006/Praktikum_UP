#include <iostream>
using namespace std;

const int MAX_ROWS_COLS=100;
void fillMatrix(int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];         
        } cout << "_______________________________________\n";
    } 
}

void printMatrix(int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int equalStart(int matrix[MAX_ROWS_COLS][5], int arr[MAX_ROWS_COLS], int rows) //task 1
{
    int maxCount = -1;
    int countMutual = 0;
    int indexofColumn = -1;

    for (int i = 0; i < 5; ++i) 
    {
        for (int j = 0; j < rows; j++)
        {
            if (matrix[j][i] == arr[j])
            {
                countMutual++;
            }
        }
        if (maxCount < countMutual)
        {
            maxCount = countMutual;
            indexofColumn = i;
        } countMutual = 0;  
    }
    return indexofColumn;
}

//void multiplyMatrix(int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows, int cols, int multiplyMatrix[MAX_ROWS_COLS][MAX_ROWS_COLS])
//{
//    for (int i = 0; i < cols; i++)
//    {
//        for (int j = 0;  j < rows;  j++)
//        {
//            multiplyMatrix[i][j] = matrix[j][i];
//        }
//    }
//}

void multiplyMatrices(int matrix1[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows1, int cols1, int matrix2[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows2, int cols2, int multiplyedMatrix[MAX_ROWS_COLS][MAX_ROWS_COLS])
{
    int sum = 0, multiplyedRows = rows1, multiplyedCols = cols1, counter = 0;
    multiplyedRows = (multiplyedRows > rows2 ? rows2 : rows1);
    multiplyedCols = (multiplyedCols > cols2 ? cols2 : cols1);
    for (int row = 0; row < multiplyedRows; row++)
    {
        for (int col = 0; col < multiplyedCols; col++)
        {
            while (counter < cols1 && counter < rows2)
            {
                sum += matrix1[row][0 + counter] * matrix2[0 + counter][col];
                counter++;
            }
            multiplyedMatrix[row][col] = sum;
            sum = 0;
            counter = 0;
        }
    }
}


int main()
{
    //task 1
   /*int rows, cols = 5;
    cout << "Enter the number of rows of a matrix/elements in an array: ";
    cin >> rows;
    cout << "The number of columns of a matrix is 5!" << endl;

    int matrix[MAX_ROWS_COLS][5];
    fillMatrix(matrix, rows, cols);
    cout << "The matrix looks like: \n";
    printMatrix(matrix, rows, cols);
    cout << endl;

    cout << "Enter the elements of the array: " << endl;
    int arr[MAX_ROWS_COLS];
    for (int i = 0; i < rows; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "========================================\n";
    cout << equalStart(matrix, arr, rows);
    cout << endl;*/

    //task 2
    /*int rows, cols;
    int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS];
    int multiplyMatrix[MAX_ROWS_COLS][MAX_ROWS_COLS];
    cout << "Enter the number of rows of a matrix: ";
    cin >> rows;
    cout << "Enter the number of columns of a matrix: ";
    cin >> cols;
    fillMatrix(matrix, rows, cols);
    multiplyMatrix(matrix, rows, cols, multiplyMatrix);
    const int tRows = cols, tCols = rows;
    printMatrix(multiplyMatrix, tRows, tCols);*/
    int matrix1[][MAX_ROWS_COLS] = { {1, 2, 3},
                                     {4, 5, 6} };
    int matrix2[][MAX_ROWS_COLS] = { {7, 8},
                                     {9, 10},
                                     {11, 12} };
    int multiplyedMatrix[MAX_ROWS_COLS][MAX_ROWS_COLS];
    multiplyMatrices(matrix1, 2, 3, matrix2, 3, 2, multiplyedMatrix);
    printMatrix(multiplyedMatrix, 2, 2);

    return 0;
}
