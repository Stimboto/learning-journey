#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    /*
    substr(indx) and substr(indx,len) -> substring always left to right
    substring -> any continuous part of string
    subsequence -> not continuous
    */
   string s = "Aditya";
   cout<<s.substr(0,3)<<endl; // 0 se start, 3 len tk
   cout<<s.substr(1,3)<<endl; // 1 se start, 3 len tk
   cout<<s.substr(2)<<endl; // 2 se start end tk 

}