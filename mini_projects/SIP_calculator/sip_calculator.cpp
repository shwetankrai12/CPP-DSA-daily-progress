#include <iostream>
using namespace std;

int main () {
    double monthly_amount;
    double annual_rate;  
    int months;

    cout << "Enter the monthly amount: ";
    cin >> monthly_amount;

    cout << "Enter the annual rate (in %): ";
    cin >> annual_rate;

    cout << "Enter the number of months: ";
    cin >> months;

    if (monthly_amount <= 0 || annual_rate < 0 || months <= 0) {
        cout << "Invalid input values. Please enter positive numbers." << endl;
        return 0;
    }

    double monthly_rate = annual_rate / (12 * 100);
    double maturity_amount = 0;

    for (int i = 0; i < months; i++) {
        double current = monthly_amount;
        int time = months - i;

        for (int j = 0; j < time; j++) {
            current *= (1 + monthly_rate);
        }

        maturity_amount += current;
    }

    cout << "Amount at maturity after " << months << " months will be: ₹" << maturity_amount << endl;
    return 0;
}