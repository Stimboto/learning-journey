#include<iostream>
#include<string>
using namespace std;
int main(){
    // space itself is a character which has its own ASCII
    // string is character array

    string x = "aditya is a student";
    cout<<x<<endl;

    string s;
    // no need to use loop
    //after space it omits the input
    //cin>>s; 
    //to include spaces as well we use getline()
    getline(cin,s);
    cout<<s;
}