// code for printing from decimal to binary
#include <iostream>
#include <math.h>
using namespace std;
int main() {

int n;
cout << "Enter the number: " << endl;
cin >> n;
int ans = 0;
int i = 0;
while (n!=0) {
    int bit = n & 1;
    ans = (bit * pow (10,i)) + ans;
    n >>=1;
    i++;
}
cout << ans << endl;
    return 0;
}

// code for printing from binary to decimal
#include <iostream>
 #include <math.h>
 using namespace std;
 int main() {

int n;
cout << "Enter the number: " << endl;
cin >> n;
int ans = 0;
int i = 0;
while (n!=0) {
    int digit = n % 10;
    if (digit ==1) {
    ans =ans + pow (2,i) ;
}
    n = n /10;
    i++;
}
cout << ans << endl;
    return 0;
}