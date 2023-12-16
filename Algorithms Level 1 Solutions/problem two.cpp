#include <iostream>
#include <string>
using namespace std;

string ReadName()
{
    string Name;
    cout << "Enter your full name: " << endl;
    getline(cin, Name);
    return Name;
}

void PrintName(string Name)
{
    cout << "Your name is : " << Name << endl;
}

int main()
{
    cout << "this is the second problem, read the name from user then print it\n";
    cout << "\nI'm using procedure with a function readname as a  parameter" << endl;

    PrintName(ReadName());

    return 0;
}
