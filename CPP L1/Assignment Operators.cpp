#include <iostream>
using namespace std;
int main()
{
    short a = 10 , b = 20;
    
    cout << "   a = 5      b = 20                 a = " << a << endl;

    a += b;
    cout << "\n a = a + b   same as\t   a += b    a = " << a << endl;

    a -= b;
    cout << "\n a = a - b   same as\t   a -= b    a = " << a << endl;

    a *= b;
    cout << "\n a = a * b   same as\t   a *= b    a = " << a << endl;

    a /= b;
    cout << "\n a = a / b   same as\t   a /= b    a = " << a << endl;

    a %= b;
    cout << "\n a = a % b   same as\t   a %= b    a = " << a << endl;

    return 0;
}
