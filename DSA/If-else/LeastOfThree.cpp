#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // if (a <= b && a <= c)
    // {
    //     cout << a << " Smallest";
    // }
    // else if (b <= a && b <= c)
    // {
    //     cout << b << " Smallest";
    // }

    // else
    // {
    //     cout << c << " Smallest";
    // }


    if(a<b) {
        if(a<=c) cout<<a<<" is Smallest";
        else //b>a>c
        cout<<b<<" is Smallest";

     }
     else {
        //a>b
        if(b<=c) cout<<b<<" is Smallest";
        else // a>b>c
        cout<<c<<" is smallest";
     }

}