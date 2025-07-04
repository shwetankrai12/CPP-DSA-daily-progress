// even or odd
// This code checks whether a number is even or odd using bitwise operator.
#include <iostream>
using namespace std;

bool isEven (int a) {
    if (a & 1) {
        return 0;
    } 
    return 1;
}
int main () {
    int num;
    
    cin >> num;
    
    if (isEven(num)) {
        cout << "even" << endl;
        
    } else {
        cout << "odd" << endl;
    }
}
 
// Code for calculating nCr (combinations) using factorial

#include <iostream> 
using namespace std;

int factorial (int n) {
    int fact =1;
    for (int i =1 ; i<=n ; i++) {
        
        fact = fact * i;
        
    }
    return fact;
}
int nCr (int n ,int r) {
    
    int num = factorial (n);
    int deno = factorial (r) * factorial (n-r);
    return num/ deno;
}

int main () {
    int n ,  r;
    cin >> n;
    cin >> r ;
    cout << nCr (n ,r) << endl;
}

// Code for checking whether a number is prime or not

#include <iostream>
using namespace std;

bool isPrime (int n) {
    
    for (int i = 2 ; i < n; i++) {
        
       if (n%i == 0) {
           return 1;
       }
        
    }
    return 0;
}
    
int main () {
    
    int n;
    cin >> n;
   if (isPrime(n)) {
       cout << "even" <<endl;
   } else {
       cout << "not prime" << endl;
   }
}