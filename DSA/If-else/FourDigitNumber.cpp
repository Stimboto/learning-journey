#include <iostream>
using namespace std;
#include <climits>

int main()
{
   int num;
   cin>>num;

   // 1000 <= n <= 9999
   // short circuiting -> if one gets false it doen't care about others
   if ((num >=1000 && num <=9999) || (num >=-9999 && num <= -1000)){
    cout<<"It's a 4 digit";
   }
   else{
      cout<<"Not a four digit";
   }


}