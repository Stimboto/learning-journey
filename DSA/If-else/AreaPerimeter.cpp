#include <iostream>
using namespace std;
int main()
{
    float l, b;
    cout << "Enter length and breadth: ";
    cin >> l >> b;

    float area = l * b;
    float perimeter = 2 * (l + b);

    if (!(area > perimeter))
    {
        cout << "Area is less";
    }
    else
    {
        cout << "Perimeter is greater";
    }
}