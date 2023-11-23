#include <iostream>
using namespace std;

void printDivided()
{
    cout << "\n------------------------------\n";
}

void displayCardInfo()
{
    cout << "Name: Ahab ahmed" << endl;
}

void printHwithStars()
{
    cout << "\t*\t*\n";
    cout << "\t*\t*\n";
    cout << "\t*\t*\n";
    cout << "\t*********\n";
    cout << "\t*\t*\n";
    cout << "\t*\t*\n";
    cout << "\t*\t*\n";
}

void Start()
{
    displayCardInfo();
    printDivided();
    printHwithStars();
}

int main()
{
    Start();

    return 0;
}
