#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int rev = 0, n2 = n;
  while(n != 0){
     rev *= 10;
     rev = rev + (n%10);
     n/=10;

  }
  cout<<rev+n2;
  
  
}