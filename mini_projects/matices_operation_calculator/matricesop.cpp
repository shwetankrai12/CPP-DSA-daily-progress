#include<iostream>
#include <vector>

using namespace std;

int main () {

    cout << "Welcome to the Matrix Operation Calculator!" << endl;
    cout << "This program will help you perform basic matrix operations." << endl;
    cout << "Please enter the dimensions of the matrices." << endl;
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    vector<vector<int>> matrix1 (rows, vector<int>(columns));
    vector<vector<int>> matrix2 (rows, vector<int>(columns));
 // Input the first matrix
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < columns; j++) {

            cout << "Enter the element at position " << i << "," << j << ": ";
            cin >> matrix1[i][j];

        }
    }
    cout << "You entered  1st matrix:" << endl;
    // Display the matrix
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < columns; j++) {

            cout << matrix1[i][j] << " ";

        }
        cout << endl;
    }
    // Input the second matrix
    cout << "Enter the elements of the second matrix:" << endl;
        for (int i = 0; i < rows; i++) {

        for (int j = 0; j < columns; j++) {

            cout << "Enter the element at position " << i << "," << j << ": ";
            cin >> matrix2[i][j];

        }
    }
    cout << "Your entered 2nd matrix:" << endl;
    // Display the matrix
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < columns; j++) {

            cout << matrix2[i][j] << " ";

        }
        cout << endl;
    }
cout << "Enter the operation you want to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Transpose" << endl;

    int choice;
    cin >> choice;

    switch (choice) {
        case 1: {
            // Addition logic here

            vector<vector<int>> result(rows, vector<int>(columns));
            for (int i = 0; i , rows; i++) {
                for (int j =0; j < columns; j++) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                    cout << result[i][j] << " ";
                }
                 cout << endl;
            }
           
            break;
        }
        case 2: {
            // Subtraction logic here
           vector<vector<int>> result(rows, vector<int>(columns));
            for (int i = 0; i , rows; i++) {
                for (int j =0; j < columns; j++) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                     cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }
        case 3: {
            // Multiplication logic here
           vector<vector<int>> result(rows, vector<int>(columns));
            for (int i = 0; i < rows; i++) {
                for (int j =0; j < columns; j++) {
                    result[i][j] = matrix1[i][j] * matrix2[i][j];
                    cout << result[i][j] << " ";
                }
                cout <<endl;
            }
            break;
        }
        case 4: {
            // Transpose logic here
            cout << "Transpose operation is not implemented yet." << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}