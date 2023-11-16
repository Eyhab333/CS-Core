#include <iostream>
using namespace std;

enum Week {sat = 10, sun = 20, mon = 30, tue, wed, thur, fri};
enum Color {Red, Green, Blue};


int main()
{
    Week Today;
    Color MyFavouriteColor;

    Today = Week::mon;
    MyFavouriteColor = Color::Green;

    cout << "Enums c++\n";
    cout << "---------\n";

    cout << "An enumeration is a distinct type whose value is restricted to a range of values \n";



    cout << "\n \n";


    cout << "\n \n";




    return 0;
}
