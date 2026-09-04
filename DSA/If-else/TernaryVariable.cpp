#include <iostream>
using namespace std;
int main()
{
 int x =6;
//  int y = (x>12) ? x-4: x*4;
//iski kuch vakue hoti hh jo hm variable mein store krr skte hh
int y = (x++ > 12) ? x-4: x*4;

 cout<<y;
}