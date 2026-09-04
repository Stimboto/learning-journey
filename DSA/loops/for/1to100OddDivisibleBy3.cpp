#include <iostream>
using namespace std;
int main()
{
    
    //50 iterations and it will print odds
    // for(int i = 1; i<=100; i+=2){
    //     cout<<i<<" ";
    // } 


    for(int i=1; i<=100; i++) {
        if(i%2==1 && i%3==0){
            cout<<i<<" ";
        }
    }

    for(int i=3; i<=99; i+=6) {
            cout<<i<<" ";
    }
    
}