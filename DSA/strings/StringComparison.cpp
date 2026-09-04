#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    /*
      1. we can compare whole strings 
      2. '==' compares string chracter by character
      3. we can use all 6 relational operators for strings
    */

    string x = "abcdef";
    string y = "xyz";
    if(x==y) cout<<"Same"<<endl;
    else cout<<"Not same"<<endl;
  
    //chracter by character, length doesn't matter(matters only if all characters of otehr are same initially)
    if(x>y) cout<<x<<" is greater than "<<y<<endl;
    else cout<<y<<" is greater than "<<x<<endl;
    
}