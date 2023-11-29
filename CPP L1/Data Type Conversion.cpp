#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1;
    string str = "564.8787";
    int num33 = 33;
    double num44 = 44.55;

    // convert double to integer
    double num2 = 56.87;
    num1 = (int) num2;
    cout << "convert double to integer: " << num1 << "\n";

    // convert string to int, float and double
    int num_int = stoi(str);
    float num_float = stof(str);
    double num_double = stod(str);

    cout << "int: " << num_int << " \n";
    cout << "ifloat: " << num_float << " \n";
    cout << "double: " << num_double << " \n";

    // convert int and double to string
    string st1, st2;
    st1 = to_string(num33);
    st2 = to_string(num44);

    cout << "string1 = " << st1 << endl;
    cout << "string2 = " << st2 << endl;
    cout << "st1 + st2: " << st1 + st2 << endl;

    return 0;
}
