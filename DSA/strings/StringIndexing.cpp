#include<iostream>
#include<string>
using namespace std;
int main(){
    /*
     0. index starts with 0 as usual
     1. we can print, change individual character just like array
    */
   string s = "aditya yadav";
   cout<<s.size()<<endl; cout<<s.length()<<endl; // length of array
   cout<<s[1]<<endl;
   s[0]='o'; // represent individual character
   cout<<s<<endl;
}