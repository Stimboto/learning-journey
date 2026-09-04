#include <iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;

//works well for positive
 while(n > 0){
    int ld = n%10;
    cout<<ld;
    n/=10;
 }

//works for all
int rev =0;
while(n != 0){
     int ld =n%10;
     rev *= 10;
     rev = rev +ld;
     n/=10;
}
cout<<rev;
}