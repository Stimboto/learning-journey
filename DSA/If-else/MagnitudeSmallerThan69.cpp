#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
// |n| < 69
    if ( num > -69 && num < 69) {
        cout<<"Smaller";
    }
    else{
        cout<<"Not";
    }
}