#include <iostream>

using namespace std;

int getpivot (int arr[], int n) {

    int start =0;
    int end= n-1;
    
    while (start <end) {
        int mid = start + (end-start)/2;


        if(arr[mid] >= arr[0]) {

            start = mid +1;

        }else {
            end = mid;
        }

    }
    return start;

}

int main () {

    int arr [5] = {7,9,1,2,3};

    cout << "the pivot is at index: " << getpivot (arr,5) << endl;
}