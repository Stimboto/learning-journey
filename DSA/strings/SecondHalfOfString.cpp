#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    /*
    input a string of even length and return the second half 
    of that string using inbuilt substr fn.
    */
    string s;
    getline(cin,s);
    int n = s.length();
    cout<<s.substr(n/2);
    
}