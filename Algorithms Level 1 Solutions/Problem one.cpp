#include <iostream>
using namespace std;

void printName(string Name)
{
    cout << "Your name is : " << Name << endl;
}

int main()
{
    cout << "this is the first problem, print your name on the screen\n";
    cout << "I'm using procedure with a string parameter, and I'm calling it in main" << endl;

    printName("Ahab fadl");

    return 0;
}
