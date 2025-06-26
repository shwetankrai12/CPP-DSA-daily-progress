#include <iostream>
using namespace std;

int main () {
double monthly_amount;
double rate;
int months=1;
cout<< "Enter the monthly amount: " << endl;
cin>> monthly_amount;
cout << "Enter the annual rate: " << endl;
cin>> rate;
cout << "Enter the months: " << endl;
cin>> months;
double monthly_rate = rate/(12*100);
double maturity_amount=0;
int i=0;
while (i<months) {
    double current = monthly_amount;
    int time = months-i;
    int j = 0;
    while (j<time) {
        current = current * (1 + monthly_rate);
        j=j+1;
    }
    maturity_amount += current;
    i=i+1;
}
cout << "Amount at maturity of " << months<< " month will be: " << maturity_amount;
}