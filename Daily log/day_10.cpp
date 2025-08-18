// code for finding the pivot in a rotated sorted array
 
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

// code for finding sqrt upto 3 demimal places
#include <iostream>
using namespace std;
int sqrtInt(int n) {

    int s = 0;
    int e = n/2;
    int ans = -1;
    if (n==1) {
        return 1;
    }
    while (s <= e) {

      long long mid = s + (e - s)/2;

      if (mid*mid == n) {

        return mid;

      }
      else if (mid*mid < n) {
        ans = mid;
        s = mid +1;
    } else {
        e = mid - 1;

    }
    }
return ans;
}
double sqrtdecimal (int n, int precision, int tempsol) {

    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++) {

        factor = factor /10;
        for (double j = ans ; j*j <= n; j= j + factor) {
            ans = j;
        }

    }
    return ans;
}
int main () {

    int n;
    cout << "Enter the number to find the square root: ";
    cin >> n;
    int ans = sqrtInt(n);
    cout << "The integer part of the square root is: " << sqrtdecimal(n,3,ans) << endl;
}