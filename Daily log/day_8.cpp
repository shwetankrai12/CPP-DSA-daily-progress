// finding the largest and smallest element in an array
#include <iostream>
using namespace std;

int SmallestElement (int arr[],int size) {
    int min = arr[0];
    for (int i =1; i < size; i++) {
        
        if (arr[i]< min) {
            min = arr [i];
        }

    }
    return min;
}

int LargestElement (int arr [], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main () {
    
    int n;
    cout << "Enter the number of input Element: " << endl;
    cin >> n;
    int arr [10];
    
    for (int i = 0;i< n; i++) {
        
        cin >> arr[i]; " ";
    }
    
   cout << "Largest Element is: " << LargestElement(arr, 5) << endl;
   cout << "smallest Element is: " << SmallestElement(arr, 5) << endl;
}

// finding the sum of all elements in an array

#include <iostream>
using namespace std;

void sumofArray(int arr[],int num){
    
    int sum = 0;
    for (int i =0; i < num; i++) {
        
        sum = sum + arr[i];
        
    }
    cout <<"The sum of array is: " << sum << endl;
}

int main() {
    
    int num;
    int arr[10];
    cout << "Enter the number of elements of array(<10): " << endl;
    cin >> num;
    cout << "Enter the elements of array: " << endl;
    
    for (int i =0; i <num; i++) {
        
        cin >> arr [i];
        
    }
    sumofArray (arr,num);
}
// searching an element in an array

#include <iostream>

using namespace std;

bool search (int arr[], int num) {

for (int i = 0; i < 5; i++) {
    
    if (num == arr[i] ) {
        return true;
     }
    }
    return false;
}

int main () {
    int num; 
    cout << "Enter the element to search in Array: " << endl;
    cin >> num;
    int arr [5] = {1, 2, 10, 7, 11};
    
    if (search (arr,num)) {
        cout << "found." << endl;
    } else {
        cout << "not found." << endl;
    }
}

// reversing an array

#include <iostream>
using namespace std;

void Arrayreverse (int arr[], int num) {
    
    int dum_arr[5];
    for (int i = 0; i < num; i++) {
      dum_arr[i] = arr[num - 1 - i];
    }
  for (int i = 0; i < num; i++) {
       cout << dum_arr[i] <<" ";
   }
   cout << endl;
}

int main () {
    
    int num;
    cout << "Enter the number of element: " << endl;
    cin >> num;
    int arr [5];
    cout << "Enter the element: " << endl;
    for (int i = 0; i < num ; i++) {
        cin >> arr[i];
    }
    Arrayreverse(arr,num);
}

// swapping alternate elements in an array

#include <iostream>
using namespace std;

void SwapAlternate (int arr[], int num) {
    
    int temp=0;
   for (int i= 0; i < num-1; i += 2) {
       temp = arr[i];
       arr[i] = arr[i+1];
       arr[i+1] = temp;
   }
   for (int i = 0; i < num; i++) {
    cout << arr[i] << " ";
}
    cout << endl;
}

int main () {
    
    int num;
    cout << "Enter the number of element: " << endl;
    cin >> num;
    int arr [5];
    cout << "Enter the element: " << endl;
    for (int i = 0; i < num ; i++) {
        cin >> arr[i];
    }
    SwapAlternate(arr,num);
}

// finding unique elements in an array

#include <iostream>
using namespace std;
int check (int arr [], int num,int target) {
    int count =0;
    for (int i = 0; i <  num; i++) {
        
        if (arr[i] == target){
            count ++;
        }
    }
    return (count == 1);
    
}
void uniqueelement (int arr [], int num) {
    
    for (int i=0; i < num; i ++) {
        if (check(arr,num,arr[i]))
        cout << arr[i] << " ";
    }
    cout << endl; 
}

int main () {
    
    int num;
    cout << "Enter the number of element: " << endl;
    cin >> num;
    int arr [5];
    cout << "Enter the element: " << endl;
    for (int i = 0; i < num ; i++) {
        cin >> arr[i];
    }
    uniqueelement(arr,num);
}

// finding duplicate elements in an array

#include <iostream>
using namespace std;
int check (int arr [], int num,int target) {
    int count =0;
    for (int i = 0; i <  num; i++) {
        
        if (arr[i] == target){
            count ++;
        }
    }
    return (count > 1);
    
}
void duplielement (int arr [], int num) {
    for (int i=0; i < num; i ++) {
        if (check(arr,num,arr[i])) {
            cout << "(" << arr[i] <<") is Duplicate";
        break;
        }
    }
    
    cout << endl; 
}

int main () {
    
    int num;
    cout << "Enter the number of element: " << endl;
    cin >> num;
    int arr [5];
    cout << "Enter the element: " << endl;
    for (int i = 0; i < num ; i++) {
        cin >> arr[i];
    }
    duplielement(arr,num);
}

// finding intersection of two arrays

#include <iostream> 
using namespace std;

bool checkintersection (int arr2[], int num2, int target) {
    
    for (int i = 0; i < num2; i++) {
        
        if (arr2[i]== target)
       
         return true;
        
    }
    return false;
}

void ArrayIntersection (int arr1[], int num1, int arr2[], int num2) {
    cout << "Intersection Elements: ";
    for (int i = 0; i  < num1; i++) {
        
        if (checkintersection(arr2, num2, arr1[i])) {
            cout << arr1[i] << " ";
        }
        
    }
     cout << endl;
}

int main () {
    
    int num1, num2;
    
    int arr1[10];
    int arr2[10];
    
    cout << "Enter the number of Element in the Array 1:" << endl;
    cin >> num1;
    cout << "Enter the number of Element in the Array 2:" << endl;
    cin >> num2;
    
    cout << "Enter the Element of Array 1:" << endl;
    
    for (int i =0; i < num1; i ++) {
        
        cin >> arr1[i];
        
    }
    
    cout << "Enter the Element of Array 2:" << endl;
    
    for (int i =0; i < num1; i ++) {
        
        cin >> arr2[i];
        
    }
      ArrayIntersection (arr1, num1, arr2, num2);
    return 0;
}