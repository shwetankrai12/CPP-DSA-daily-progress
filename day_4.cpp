// fibbonacci series
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: " <<  endl;
    cin >> n;
    int first = 0;
    int second =1;
    int temp=0;
    for (int i=1;i <= n ; i++) {
        
        cout << " " << first ;
        temp = first + second;
        first = second;
        second = temp;
        
    }

    return 0;
}

// prime or not

#include <iostream>
using namespace std;
int main () {
    int  n;
     bool isprime = 1;
    cout << "Enter the number: " << endl;
    cin >> n;
    for (int i =2; i < n; i++) {
        if (n%i == 0) {
           isprime = 0;
           break;
        }
    }
    if (isprime ==1) {
        cout << "number is prime" << endl;
    } else {
        cout << "number is not prime" << endl;
    }
  }