#include <iostream>
using namespace std;
#include <climits>

int main()
{
    int num;
    cin >> num;

    if (num >= 100)
    {
        if (num <= 999)
            cout << "3 digit number";
        else
            cout << "Not";
    }
    else
        cout << "Not a three digit";

    //    1000 <= n <= 9999
    //    short circuiting -> if one gets false it doen't care about others
    //    if ((num >=100 && num <=999) || (num >=-9999 && num <= -1000)){
    //     cout<<"It's a 3 digit";
    //    }
    //    else{
    //       cout<<"Not a 3 digit";
    //    }
}