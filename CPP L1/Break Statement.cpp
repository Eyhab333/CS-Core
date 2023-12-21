#include <iostream>
using namespace std;


int main()
{
    int arr[10] = { 10, 20, 44, 55, 33, 22, 99, 100 };
    
    short SearchFor = 44;

    for (int i = 0; i <= 10; i++)
    {
        cout << "We are in iteration " << i << "\n\n";

        if (arr[i] == SearchFor)
        {
            cout << "Found at position: " << i << "\n";
            break;
        }
        
    }


    return 0;
}
