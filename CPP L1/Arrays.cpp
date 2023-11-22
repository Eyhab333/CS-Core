#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "this is my first array in c++! int MyArrayOf5Integers[5] = { 2, 4, 6, 8, 10 };\n";
    int MyArrayOf5Integers[5] = { 2, 4, 6, 8, 10 };
    cout << "\nPrint the First integer in my array: " << MyArrayOf5Integers[0] << endl;
    cout << "\nPrint the Second integer in my array: " << MyArrayOf5Integers[1] << endl;
    cout << "\nPrint the Third integer in my array: " << MyArrayOf5Integers[2] << endl;
    cout << "\nPrint the Fourth integer in my array: " << MyArrayOf5Integers[3] << endl;
    cout << "\nPrint the Fifth integer in my array: " << MyArrayOf5Integers[4] << endl;

    cout << "\n========================================================================\n";

    cout << "\nNow let's make you enter the data of a new array. Ready! string MyArrayOf5Strings[5] = {}" << endl;
    string MyArrayOf5Strings[5];
    cout << "\nEnter the first string: \n";
    getline(cin, MyArrayOf5Strings[0]);
    cout << "\nEnter the Second string: \n";
    getline(cin, MyArrayOf5Strings[1]);
    cout << "\nEnter the Third string: \n";
    getline(cin, MyArrayOf5Strings[2]);
    cout << "\nEnter the Fourth string: \n";
    getline(cin, MyArrayOf5Strings[3]);
    cout << "\nEnter the Fifth string: \n";
    getline(cin, MyArrayOf5Strings[4]);

    cout << "\nThis is your array of strings: string MyArrayOf5Strings[5] = { "
        << MyArrayOf5Strings[0] << ", " << MyArrayOf5Strings[1] << ", "
        << MyArrayOf5Strings[2] << ", " << MyArrayOf5Strings[3] << ", "
        << MyArrayOf5Strings[4] << " };\n" ;

    cout << "\n========================================================================\n";

    cout << "\nNow let's try make calculation using the integers in the first array:\n\n MyArrayOf5Integers[0] + MyArrayOf5Integers[0] = 2 + 2 = " << 
        MyArrayOf5Integers[0] + MyArrayOf5Integers[0] << "\n";

    cout << "\n========================================================================\n";

    cout << "\nLet's solve the homework: make a program to calculate the avreage of a student's grades\n\n";
    float ArrayOf3Grades[3]{};

    cout << "\nEnter the first grade: ";
    cin >> ArrayOf3Grades[0];
    cout << endl;

    cout << "\nEnter the second grade: ";
    cin >> ArrayOf3Grades[1];
    cout << endl;

    cout << "\nEnter the third grade: ";
    cin >> ArrayOf3Grades[2];
    cout << endl;

    cout << "\nYour average is : " << (ArrayOf3Grades[0] + ArrayOf3Grades[1] + ArrayOf3Grades[2]) / 3 << endl;


    return 0;
}
