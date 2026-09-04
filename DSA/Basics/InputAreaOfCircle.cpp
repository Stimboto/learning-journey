#include <iostream>
using namespace std;

int main()
{
    float radius;
    cout << "Enter radius of circle:";

    cin >> radius;
    float area = 3.141592 * radius * radius;
    cout << area << endl;
}