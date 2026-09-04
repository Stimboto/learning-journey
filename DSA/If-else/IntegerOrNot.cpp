#include <iostream>
using namespace std;
int main()
{
    float n;
    cout << "Enter a real number: ";
    cin >> n;

    int x = (int)n;
    if (!(x == n))
    {
        cout << "Not Integer";
    }

    else
    {
        cout << "Integer";
    }
}