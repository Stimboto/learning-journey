#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    // post (x++, x--), pre(++x, --x)
    // cout << x << endl;
    // x++; // x=x+1 or x += 1 or ++x
    // cout << x << endl;

    // cout << x << endl;
    // x--; // x=x-1 or x -= 1 or --x
    // cout << x << endl;

    // cout << x++ << endl;
    // cout << ++x << endl;
    // cout << x << endl;

    // cout << x-- << endl;
    // cout << --x << endl;
    // cout << x << endl;

    int y = x++ + ++x;
    int z = x++ + --x;
    cout << x << "\n"
         << z;
}