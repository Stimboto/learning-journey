#include <iostream>
using namespace std;
int main()
{
   
   int n;
   cout<<"Enter number of terms: ";
   cin>>n;

   int a = 2, r = 3;
   for(int i=1; i<=n; i++){
       cout<<a<<" ";
       a *= r;
   }

}