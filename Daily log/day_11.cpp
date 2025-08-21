// File: Daily log/day_11.cpp
// this file is for selection sort implementation

#include <iostream>
using namespace std;

void SelectionSort(int arr[], int num) {
    for (int i = 0; i < num - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < num; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    int arr[100];
    cout << "Enter the elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    SelectionSort(arr, num);

    cout << "Sorted array: ";
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}