#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome, in this program I will calculate how many months you need to settle the loan!\n";

    float LoanAmount, MonthlyPayment, Months;

    cout << "\nFirst, how much the loan?\n";
    cin >> LoanAmount;

    cout << "\nHow much you will pay at month?\n";
    cin >> MonthlyPayment;

    Months = LoanAmount / MonthlyPayment;

    cout << "\nOkay dude, you need: " << Months << " months to settle the loan.\n";

    return 0;
}
