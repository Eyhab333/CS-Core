#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int PI = 3.14159265359;
    float SideLength, Area;

    cout << "This program calculates circle area inscribed in a square!\n"; //  ����� ������� �������� ����� ������

    cout << "\nPlease enter the Side length of the square\n"; // ��� ��� ������
    cin >> SideLength;

    Area = (PI * pow(SideLength , 2)) / 4;

    cout << "\nArea is: " << Area << "\n";

    cout << "\nArea with ceil is: " << ceil(Area) << "\n";

    return 0;
}
