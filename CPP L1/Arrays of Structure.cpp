#include <iostream>
#include <string>
using namespace std;

struct strAdress
{
    string City;
    string Zipcode;
};
struct strInfo
{
    string FirstName;
    string LastName;
    short Age = 0;
    string Phone;
    strAdress Adress;
};

void ReadInfo(strInfo& Info)
{
    cout << "Enter first name: ";
    getline(cin, Info.FirstName);
    cout << "\n";

    cout << "Enter last name: ";
    getline(cin, Info.LastName);
    cout << "\n";

    cout << "Enter age: ";
    cin >> Info.Age;
    cout << "\n";

    cout << "Enter phone: ";
    cin.ignore(1, '\n');
    getline(cin, Info.Phone);
    cout << "\n";

    cout << "Enter city: ";
    cin >> Info.Adress.City;
    cout << "\n";

    cout << "Enter city zip-code: ";
    getline(cin, Info.Adress.Zipcode);
    cout << "\n";

    cout << "\n==============================================\n\n\n\n";
}
void PrintInfo(strInfo Info)
{
    cout << "=====================================\n";
    cout << "\n\n\t\t" << Info.Adress.City << endl;
    cout << "\n=====================================\n";
}

void ReadPersonsInfo(strInfo Persons[5])
{
    ReadInfo(Persons[0]);
    ReadInfo(Persons[1]);
    ReadInfo(Persons[2]);
    ReadInfo(Persons[3]);
    ReadInfo(Persons[4]);
}
void PrintPersonsInfo(strInfo Persons[5])
{
    PrintInfo(Persons[0]);
    PrintInfo(Persons[1]);
    PrintInfo(Persons[2]);
    PrintInfo(Persons[3]);
    PrintInfo(Persons[4]);
}

int main()
{
    strInfo Persons[5];
    ReadPersonsInfo(Persons);
    cout << "Thier cities are: \n";
    PrintPersonsInfo(Persons);
    cout << endl;

    return 0;
}
