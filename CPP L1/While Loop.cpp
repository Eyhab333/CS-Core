#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
	int Number = 0;

	cout << "Please man enter a positive number don't be a deck: ";
	cin >> Number;

	while (Number < 0)
	{
		cout << "Why dude? what's the matter with you! just enter a positive number: ";
		cin >> Number;
	}

	cout << "Thanks man you entered: [" << Number << "] \n\n\n\n";

	return Number;
}
int ReadIntNumberInRange(int From, int To, string MessageSuccess, string MessageFalse)
{
	int Number = 0;
	cout << MessageFalse;
	cin >> Number;

	while (Number < From || Number > To)
	{
		cout << "Hey man you have to follow the rules, " << MessageFalse;
		cin >> Number;
	}

	cout << MessageSuccess << Number << "] ";
	return Number;
}


int main()
{
	cout << "First one!\n\n";
	ReadPositiveNumber();

	cout << "Second!\n\n";
	ReadIntNumberInRange(1, 100, "Thanks you entered: [", "Please Enter a number between 1 and 100: ");
	cout << "\n\n\n";

	return 0;
}
