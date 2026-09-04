#include <iostream>
using namespace std;
int main()
{
   
   int n;
   cin>>n;

   int a = 3, d=4;
   
//    for(int i=a; i<=a+(n-1)*d; i+=d){
//     cout<<i<<" ";
//    }

    // for(int i = 1; i<=n; i++){
    //     cout<<a+(i-1)*d<<" ";
    // }

    for(int i =1; i<=n; i++){
        cout<<a<<" ";
        a += d;
    }

}