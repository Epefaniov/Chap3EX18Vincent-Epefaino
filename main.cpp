#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    double principal;
    double rate;
    int timesCompounded;

    
    cout << "Enter the principal amount: $";
    cin >> principal;

    cout << "Enter the interest rate (as a percentage): ";
    cin >> rate;

    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

    
    rate /= 100.0;

    
    double amount = principal * pow(1 + rate / timesCompounded, timesCompounded);
    double interest = amount - principal;

    
    cout << fixed << setprecision(2);

    
    cout << "\nInterest Rate: " << rate * 100 << "%" << endl;
    cout << "Times Compounded: " << timesCompounded << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest: $" << interest << endl;
    cout << "Amount in Savings: $" << amount << endl;

    return 0;
}
