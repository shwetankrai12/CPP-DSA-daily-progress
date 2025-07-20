#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Welcome to the Matrix Operation Calculator!" << endl;
    cout << "This program will help you perform basic matrix operations." << endl;

    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    vector<vector<int>> matrix1(rows, vector<int>(columns));
    vector<vector<int>> matrix2(rows, vector<int>(columns));

    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }

    cout << "You entered 1st matrix:" << endl;
    for (auto& row : matrix1) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }

    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }

    cout << "You entered 2nd matrix:" << endl;
    for (auto& row : matrix2) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }

    cout << "Enter the operation you want to perform:" << endl;
    cout << "1. Addition\n2. Subtraction\n3. Element-wise Multiplication\n4. Transpose" << endl;

    int choice;
    cin >> choice;

    switch (choice) {
        case 1: {
            vector<vector<int>> result(rows, vector<int>(columns));
            cout << "Matrix Addition Result:\n";
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }
        case 2: {
            vector<vector<int>> result(rows, vector<int>(columns));
            cout << "Matrix Subtraction Result:\n";
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }
        case 3: {
            vector<vector<int>> result(rows, vector<int>(columns));
            cout << "Element-wise Multiplication Result:\n";
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    result[i][j] = matrix1[i][j] * matrix2[i][j];
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }
        case 4: {
            int transposeChoice;
            cout << "Transpose of which matrix (1 or 2): ";
            cin >> transposeChoice;
            if (transposeChoice == 1) {
                cout << "Transpose of Matrix 1:\n";
                for (int i = 0; i < columns; i++) {
                    for (int j = 0; j < rows; j++)
                        cout << matrix1[j][i] << " ";
                    cout << endl;
                }
            } else if (transposeChoice == 2) {
                cout << "Transpose of Matrix 2:\n";
                for (int i = 0; i < columns; i++) {
                    for (int j = 0; j < rows; j++)
                        cout << matrix2[j][i] << " ";
                    cout << endl;
                }
            } else {
                cout << "Invalid choice." << endl;
            }
            break;
        }
        default:
            cout << "Invalid operation choice!" << endl;
    }

    return 0;
}
