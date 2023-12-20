#include <iostream>
using namespace std;

enum enColor { Red, Green, Blue, Yellow, Brown, Black, White, Orange };
enum enGendor { Male, Female };
enum enMaritalStatus { Single, Married };

struct stAddress
{
    string StreetName;
    string BuildingNumber;
    string ZipCode;
    string POBox;
};

struct stContactInfo
{
    string Phone;
    string Email;

    stAddress Address;
};

struct stPerson
{
    string FirstName;
    string LastName;

    stContactInfo ContactInfo;

    enMaritalStatus MaritalStatus;
    enGendor Gendor;
    enColor FavouriteColor;
};


int main()
{
    stPerson Person1;

    Person1.FirstName = "aaaaa";
    Person1.LastName = "bbbbb";
    Person1.ContactInfo.Email = "dfdsf@fdf.com";
    Person1.ContactInfo.Phone = "323435342322";
    Person1.ContactInfo.Address.StreetName = "ewewewe";
    Person1.ContactInfo.Address.BuildingNumber = "4332";
    Person1.ContactInfo.Address.POBox = "454";
    Person1.ContactInfo.Address.ZipCode = "43232";
    Person1.MaritalStatus = enMaritalStatus::Married;
    Person1.Gendor = enGendor::Male;
    Person1.FavouriteColor = enColor::Orange;

    cout << Person1.ContactInfo.Address.ZipCode << "\n";

    return 0;
}
