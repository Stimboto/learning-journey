#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int sum =0;
  if(n<0) n=-n;
  // while (n>0) --> ignores the negative numbers
  while(n != 0){
    //last digit = n%10
     sum += (n%10);
     n/=10;
  }

  cout<<sum;
}