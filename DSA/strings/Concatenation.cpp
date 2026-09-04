#include<iostream>
#include<string>
using namespace std;
int main(){
    /*
     '+' concatenates both 
    */
   string s1 = "abc";
   string s2 = "xyz";
   string s3 = "112233";
   string s4 = s1+s2+s3;
   cout<<s4<<endl;

   string s = "abc";
   //cout<<s+4<<endl; //error but not in java
   cout<<'5'+s+"4"<<endl;

   string s5 = "hello ";
   s5 += "stim";
   cout<<s5<<endl;
}