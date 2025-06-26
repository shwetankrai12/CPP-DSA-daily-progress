#include <iostream>
using namespace std;

int main () {
    double Balance = 1000;
    double amount;
    int choice;

    while (true) {
        cout << "\nHello, Welcome to Shwetank Bank." << endl;
        cout << "Enter your Choice:" << endl;
        cout << "1. Check balance" << endl;
        cout << "2. Withdrawal" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Your balance is: ₹" << Balance << endl;
        } 
        
        else if (choice == 2) {
            cout << "Enter the amount to withdraw: ";
            cin >> amount;
            if (amount > 0 && amount <= Balance) {
                Balance = Balance - amount;
                cout << "Withdrawn: ₹" << amount << endl;
                cout << "Your balance is: ₹" << Balance << endl;
            } else {
                cout << "Invalid amount or insufficient balance." << endl;
            }
        } 
        
        else if (choice == 3) {
            cout << "Enter the deposit amount: ";
            cin >> amount;
            if (amount > 0) {
                Balance = Balance + amount;
                cout << "Deposited: ₹" << amount << endl;
                cout << "Your balance is: ₹" << Balance << endl;
            } else {
                cout << "Invalid deposit amount." << endl;
            }
        } 
        
        else if (choice == 4) {
            cout << "You have exited the ATM. THANK YOU!" << endl;
            break;
        } 
        
        else {
            cout << "Invalid choice. Please select between 1 and 4." << endl;
        }
    }

    return 0;
}
