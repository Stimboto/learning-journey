#include <iostream>
using namespace std;
int main()
{
  int t=10;
  //in case of eqn in while  --> first the value get assigned then used
  while(t/=2){
    cout<<"Hello"<<endl;
  }

}