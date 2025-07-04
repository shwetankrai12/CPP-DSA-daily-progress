/* printing the pattern of the given number
1234 
1234 
1234 
1234
*/

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=n) {
            cout << j;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/* printing the pattern of the given number
4321
4321
4321
4321
*/

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=n) {
            cout << n-j+1; //formula used n-j+1
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/* printing the pattern of the given number
1 2 3 
4 5 6 
7 8 9
*/

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
    int count =1;
    while (i<=n){
        int j=1;
        while (j<=n) {
            cout << count << " ";
            count = count +1;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/*code for pattern printing using nested for loop:

* 
* * 
* * * 
* * * * 
*/ 

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=i) {
            cout << "*" << " ";
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/* printing the pattern of the given number
1 
2 2 
3 3 3 
4 4 4 4 
*/

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=i) {
            cout << i << " ";
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/* printing the pattern of the given number
1 
2 3 
4 5 6 
7 8 9 10 
*/

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
    int count = 1;
    while (i<=n){
        int j=1;
        while (j<=i) {
            cout << count << " ";
            count = count + 1;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/* printing the pattern of the given number
1 
2 3 
3 4 5 
4 5 6 7 
*/

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
    int value=1;
    while (i<=n){
        int j=1;
        value = i;
        while (j<=i) {
            cout << value<< " ";
            value = value +1;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/* printing the pattern of the given number
1 
2 1 
3 2 1 
4 3 2 1 
*/

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=i) {
            cout << i-j+1<< " ";
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/* printing the pattern of the given number
A A A 
B B B 
C C C 
*/

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=n) {
            char ch = 'A' + i - 1;
            cout << ch<< " ";
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/* printing the pattern of the given number
A B C 
A B C 
A B C 
*/

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=n) {
            char ch = 'A' + j - 1;
            cout << ch<< " ";
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/* printing the pattern of the given number
A B C 
D E F 
G H I 
*/

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
    char ch = 'A'; // initialize character variable here 
    while (i<=n){
        int j=1;
        while (j<=n) {
            cout << ch << " ";
            ch = ch + 1;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/* printing the pattern of the given number
A B C D 
B C D E 
C D E F 
D E F G 
*/

#include <iostream> 
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n;
    int i=1;
   
    while (i<=n){
        int j=1;
         char ch = i;
        while (j<=n) {
             char ch = 'A' + i + j-2;
            cout << ch << " ";
            ch = ch + 1;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}

/* printing the pattern of the given number
A 
B B 
C C C 
D D D D 
*/

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    int i=1; 
    while (i<=n) {
         char ch = 'A' + i - 1 ;
         int j = 1;
        while (j<=i) {
            cout << ch << " ";
            j= j + 1;
        }
        cout << endl;
        i = i+1;
    }
}

/* printing the pattern of the given number
A 
B C 
C D E 
D E F G 
*/

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        char ch ='A' + i -1;
        while (j<=i) {
            cout << ch << " ";
            ch = ch +1;
            j= j+1;
        }
        cout<<endl;
        i = i+1;
    }
}

/* printing the pattern of the given number
D 
C D 
B C D 
A B C D 
*/

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        char ch ='A' +n- i ;
        while (j<=i) {
            cout << ch << " ";
            ch = ch +1;
            j= j+1;
        }
        cout<<endl;
        i = i+1;
    }
}

/* printing the pattern of the given number
      * 
    * * 
  * * * 
* * * * 
*/

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    int i = 1;
    while (i <=n) {
        int space = n-i;
        while (space) {
        cout << " "<< " "; 
        space = space-1;
        }
       
        int j =1;
        while (j<=i) {
            cout << "*" << " ";
            j = j + 1;
        }
        cout << endl;
        i = i+1;
    }
}

/* printing the pattern of the given number
* * * * 
* * * 
* * 
* 
*/

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    int i = 1;
    while (i <=n) {
       int j = 1;
       int star = n-i+1;
       while (j <= n - i + 1) {
           cout << "*" << " ";
           j=j+1;
       }
       cout << endl;
       i=i+1;
    }
}

/* printing the pattern of the given number
* * * * 
  * * * 
    * * 
      * 
*/
#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    int i = 1;
    while (i <=n) {
        int space = i-1;
        while (space) {
        cout << " " << " "; 
        space= space -1;
        }
       
        int j =1;
        while (j<=n-i+1) {
            cout << "*" << " ";
            j = j + 1;
        }
        cout << endl;
        i = i+1;
    }
}

/* printing the pattern of the given number
   1
  121
 12321
1234321
*/

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    int i = 1;
   while (i<=n) {
       int space = n-i;
       while (space) {
           cout << " ";
           space = space - 1;
       }
       int j = 1;
       while (j<=i) {
           cout << j;
           j= j+1;
       }
        int t = i-1;
        while (t) {
            cout << t;
            t= t-1;
        }
        cout << endl;
        i = i+1;
   }
}

/* Dabangg pattern
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    int i = 1;
   while (i<=n) {
       // trinagle 1
       int t1 = 1;
       while (t1<=n-i+1) {
           cout << t1;
           t1 = t1 + 1;
       }
      // triangle 2
       int j = 1;
       int t2 = i-1;
       while (j<=t2) {
           cout << "*";
           j= j+1;
       }
       // trinagle 3
        int k = i-1;
        while (k) {
            cout << "*";
            k= k-1;
        }
        // triangle 4
        int t4 = n-i+1;
        while (t4) {
            cout << t4;
            t4= t4-1;
        }
        cout << endl;
        i = i+1;
   }
}