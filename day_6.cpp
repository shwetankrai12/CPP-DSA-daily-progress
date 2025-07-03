#include <iostream>
using namespace std;
int main () {
    
    int num1,num2,ans;
    char operation;
    bool valid = true;
    
    cout << "Enter the first number: " << endl;
    cin >> num1;
    
     cout << "Enter the second number: " << endl;
    cin >> num2;
    
    cout << "Enter the operator: " << endl;
    cin >> operation;
    switch (operation) {
        case '+' :
        ans = num1 + num2;
        break;
        
        case '-' :
        ans = num1 - num2;
        break;
         case '*' :
        ans = num1 * num2;
        break;
         case '/' :
         if (num2 == 0) {
             cout << "undefined answer." << endl;
             break;
         } else {
        ans = num1 / num2;
        break;
         }
        default:
            cout << "Invalid operator!" << endl;
            break;
            valid = false;
            break;
    }
     if (valid) {
        cout << "The output is: " << ans << endl;
    }
}

// Code for currency conversion using switch case
#include <iostream>

using namespace std;

int main () {
    
    int n,ans,left_amt;
    cout << "Enter the amount: " << endl;
    cin >> n;
    int note = 100;
    switch (note) {
        case 100:
        ans= n/100;
        left_amt = n%100;
        cout << "100 rupees note is: " << ans << endl;
        case 50: if (left_amt>=50) {
            ans = left_amt/50;
            left_amt = left_amt % 50;
        cout << "50 rupees note is: " << ans << endl;
        }
        case 20:
        if (left_amt >= 20) {
           ans = left_amt /20;
            left_amt = left_amt % 20;
        cout << "20 rupees note is: " << ans << endl;
        }
        case 10:
        if (left_amt >=10) {
            ans= left_amt /10;
           left_amt = left_amt %10;
        cout << "10 rupees note is: " << ans << endl;
        }
        default: 
         cout << "Left Amount (Not convertable): " << left_amt << endl;
         break;
    }
}