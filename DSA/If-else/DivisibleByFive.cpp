#include <iostream>
using namespace std;
int main()
{
    // solve also by the unit place method ??
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num % 5 == 0)
    {
        cout << "Divisible" << endl;
    }
    else
    {
        cout << "Not Divisible";
    }
}