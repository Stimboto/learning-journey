#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

     if(a>b) {
        if(a>=c) cout<<a<<" is largest";
        else //c>a>b
        cout<<c<<" is largest";

     }
     else {
        //b>a
        if(b>=c) cout<<b<<" is largest";
        else // c>b>a
        cout<<c<<" is largest";
     }





    // if (a >= b && a >= c)
    // {
    //     cout << a << " Greatest";
    // }
    // else if (b >= a && b >= c)
    // {
    //     cout << b << " Greatest";
    // }

    // else
    // {
    //     cout << c << " Greatest";
    // }
}