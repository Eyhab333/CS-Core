#include <iostream>
using namespace std;

string ReadPinCode()
{
    string PinCode;

    cout << "Enter PIN Code: ";
    cin >> PinCode;

    return PinCode;
};
bool Login()
{
    string PinCode;
    short Counter = 3;


    do
    {
        Counter--;
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            system("color 4F");
            cout << "\nWrong PIN, you have " << Counter << " more tries\n\n";
        }


    } while (Counter >= 1 && PinCode != "1234");




    return 0;
}


int main()
{
    if (Login())
    {
        system("color 2F"); // turn screen to green
        cout << "\nYour account balance is: " << 7500 << endl;
    }
    else
    {
        cout << "\nYour card is blocked, Call the bank for help" << endl;
    }

    return 0;
}
