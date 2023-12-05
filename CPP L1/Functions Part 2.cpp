#include <iostream>
using namespace std;

void printDivided()
{
    cout << "\n--------------------------------------------\n";
}

string displayCardInfo()
{
    return "Name: Ahab ahmed";
}

void print_H_withStars()
{
    cout << "\n\t*\t*\n";
    cout << "\t*\t*\n";
    cout << "\t*\t*\n";
    cout << "\t*********\n";
    cout << "\t*\t*\n";
    cout << "\t*\t*\n";
    cout << "\t*\t*\n";
}

void mySumProsedures()
{
    int Num1, Num2;

    cout << "Enter the first number: \n";
    cin >> Num1;

    cout << "Enter the second number: \n";
    cin >> Num2;

    cout << "num1 + num2 = " << Num1 + Num2 << endl;

}

int mySumFunction()
{
    int Num1, Num2;

    cout << "Enter the first number: \n";
    cin >> Num1;

    cout << "Enter the second number: \n";
    cin >> Num2;

    return Num1 + Num2;
}



void Start()
{
    cout << displayCardInfo() << endl;
    printDivided();
    print_H_withStars();
    printDivided();
    mySumProsedures();
    printDivided();
    cout << "mySumFunction() + 10 = " << mySumFunction() + 10 << endl;
    
}

int main()
{
    Start();

    return 0;
}
