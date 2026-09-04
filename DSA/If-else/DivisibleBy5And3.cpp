#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;

    /* 
     if (num % 3==0 && num %5==0) cout<<"Divisible by 3 and 5 ";
     elif (num % 3==0) cout<<"Divisible by 3 only ";
     elif (num % 5==0) cout<<"Divisible by 5 only ";
     else cout<<"Not Divisible by any";
    */

    /* 
     if (num % 3==0 && num %5==0) cout<<"Divisible by 3 and 5 ";
     elif (num % 3==0 && num %5!=0) cout<<"Divisible by 3 only ";
     elif (num % 5==0 && num %3!=0) cout<<"Divisible by 5 only ";
     else cout<<"Not Divisible by any";
    */

    /* 
     if (num % 3==0 && num %5==0) cout<<"Divisible by 3 and 5 ";
     if (num % 3==0 && num %5!=0) cout<<"Divisible by 3 only ";
     if (num % 5==0 && num %3!=0) cout<<"Divisible by 5 only ";
     if (num % 5!=0 && num %3!=0)cout<<"Not Divisible by any";
    */

    if(num % 5==0 && !(num %3==0)) {
        cout<<"Divisible by 5 only ";
    }
    else if (num % 3==0 && !(num %5==0)) {
        cout<<"Divisible by 3 only ";
    }
    else if (num % 3==0 && num %5==0) {
        cout<<"Divisible by 3 and 5 ";
    }
    else {
        cout<<"Not divisible by any";
    }
}