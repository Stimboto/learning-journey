#include <iostream>
using namespace std;
int main()
{
    //continue is less used --> as we can do all that with if
    //skips a itearation (if continue hits nothing would execute below that)
   for(int i =0; i<=100; i++){
    if(i%4 == 0) continue;
    cout<<i<<" ";
   }
}