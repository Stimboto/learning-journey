#include <iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 //int fact = 1;
 long long fact =1;

  for(int i=1; i<=n; i++){
    fact *= i;
 }

//  for(int i=2; i<=n; i++){
//     fact *= i;
//  }

//  for( int i=n; i>0; i--){
//     fact *= i;
//  }
 cout<<fact;
}