#include <iostream>
using namespace std;

struct stPerson
{
    string occupition;
};

struct stOwner
{
    string fullName, country, city, phone;
    float height, weight;
    stPerson person;
};

struct Car
{
    string Brand, Color, Model;
    short Year, Speed;
    stOwner Owner;
};


int main()
{
    Car myFavouriteCar, car1, car2, car3, car4, car5, car6, car7, car8, car9;

    cout << "Structers (also called structs) are a way to group several related variables into one place!\n";

    cout << "\nEach variable in the structure is known as a member of the structure!\n";

    myFavouriteCar.Brand = "Ford";
    myFavouriteCar.Model = "Xz";
    myFavouriteCar.Speed = 300;
    myFavouriteCar.Year = 2029;

    cout << "\nYour favourite car color is: " << myFavouriteCar.Color << endl;
    cin >> myFavouriteCar.Color;
    cout << "\nYou typed: " << myFavouriteCar.Color << endl;

    car5.Year = 1999;
    car5.Owner.fullName = "John doe";
    car5.Owner.city = "Zulfi";
    car5.Owner.person.occupition = "programmer";


    return 0;

}
