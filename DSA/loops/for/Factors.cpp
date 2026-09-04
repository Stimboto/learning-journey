#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: "; 
    cin>>n;

    //factors of any lies till taht number only 
    //print all factors via full loop upto n and another till sqrt(n)

    // for(int i=1; i<=n; i++){
    //     if(n%i==0) //factor mill gya
    //        cout<<i<<" ";  
    // }


    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0) //factor mill gya
           cout<<i<<" ";
          if( i != n/i) cout<<n/i<<" ";  
    }
}