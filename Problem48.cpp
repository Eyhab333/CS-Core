#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome, in this program I will calculate how much you will pay at month!\n";

    float LoanAmount, MonthlyPayment, Months;

    cout << "\nFirst, how much the loan?\n";
    cin >> LoanAmount;

    cout << "\nHow many months do you like to settle the loan after?\n";
    cin >> Months;

    MonthlyPayment = LoanAmount / Months;

    cout << "\nOkay dude, you will pay: " << MonthlyPayment << " every month to settle the loan.\n";

    return 0;
    
}
