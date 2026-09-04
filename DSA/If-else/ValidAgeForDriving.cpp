#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age";
    cin >> age;

    //inside condition we can give variable,assigning value,increment-decrement
    if (age >= 18)
    {
        cout << "You can drive.";
    }
    else
    {
        cout << "You can't.";
    }
}