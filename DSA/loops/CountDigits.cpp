#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter number: ";
  cin>>n;

  int count= 0;
  //leading zeroes get ignored by deafult
  // don't write while(n>=0)
  // also don't write while(n/=10)
 // while (n>0) ignores the negative numbers so we prefer while (n != 10)
  if(n==0) count++;

  //if(n<0 n= -n;) --> for negative numbers

  while(n != 0){
    n/=10; //looses a digit
    count++; 
  }
  cout<<count;
  
}