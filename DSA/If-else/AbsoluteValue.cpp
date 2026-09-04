#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;

    if (num < 0)
        // via changing the value of num
        num *= -1;
    cout << num;
    // {
    //     cout << (-(num));
    // }
    // else
    // {
    //     cout << num;
    // }
}