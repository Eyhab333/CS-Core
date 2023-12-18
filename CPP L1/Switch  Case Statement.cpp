#include <iostream>
using namespace std;

enum enDay { Sunday = 1, Monday = 2, Tuseday = 3 };


int main()
{
    enDay Day;
    short shDay;

    cout << "Enter number 1 or 2 or 3: \n";
    cin >> shDay;
    Day = (enDay)shDay;

    switch (Day)
    {
    case enDay::Sunday:
        cout << "\nsunday\n";
        break;
    case enDay::Monday:
        cout << "Monday";
        break;
    case enDay::Tuseday:
        cout << "Tuseday";
        break;
    default:
        cout << "go fu** your self\n";

    }

    return 0;
}
