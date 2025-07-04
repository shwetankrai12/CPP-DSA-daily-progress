// code for checking if a stock is buyable or unbuyable based on its price:

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "write the price of stock:";
    cin >> n;
    if (n<150) {
        cout << "stock is buyable.";
    } else {
        cout << "stock is unbuyable.";
    }
}

// code for description of upper case,lower case, and numerical values: 

#include <iostream>
using namespace std;
int main () {
 char ch;
 cout << "Write a input: " << endl;
 cin >> ch;
 if (ch>='A' && ch<='Z') {
     cout << "upper case" << endl;
 } else if (ch>='a' && ch<='z' ){ 
     cout << "lower case" << endl;
 } else if  (ch>='0' && ch<= '9') {
     cout << "numerical value" << endl;
 } else {
     cout << "other character" << endl;
 }
}

// code of using while loop to print numbers from 1 to n:

#include <iostream>
using namespace std;
int main () {
int n;
cout << "write a number: " << endl;
cin >> n;
int sum=0;
int i=1;
while (i<=n) {
    sum= sum+i;
    i++;
}
cout << "Sum is : " << sum;
}

// code for using do while loop to print sum of even numbers from 1 to n:

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "write a number: " << endl;
    cin >> n;
    int sum =0;
    int i = 2;
    while (i <= n) {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of even numbers is: " << sum << endl;
}
// table for farenheit to celsius conversion using while loop:

#include <iostream>
using namespace std;
int main () {
    float c,f;
    int start,end,step;
    cout << "Enter the starting temperature: " << endl;
    cin >> step;
    cout << "Enter the ending temperature: " << endl;
    cin >> end;
    cout << "Enter the gap between temperature: " << endl;
    cin >> start;
    c= start;
    while (c<=end) {
        f = (c *9.0f / 5.0f) + 32;
       
        cout << "temperature is: " << f << endl;
         c = c+ step;
    }
}
/*code for pattern printing using nested for loop:

***
***
***
*/ 

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows:" << endl;
    cin >> n;
    int i=1;
    while (i<=n) {
        int j=1;
        while (j<=n) {
            cout << "*";
            j=j+1;
        }
        i=i+1;
        cout << endl;
    }
}

/*code for printing a pattern of numbers using nested for loop:

111
222
333
*/

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows:" << endl;
    cin >> n;
    int i=1;
    while  (i<=n) {
        int j=1;
        while (j<=n) {
            cout  << i;
            j=j+1;
        }
        i=i+1;
        cout << endl;
    }
}