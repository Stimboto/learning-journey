#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    // if(n<0) n = -n;
    // string s = to_string(n);

    string s = to_string(abs(n)); //without changing original n
    cout<<s.length()<<endl;
    

    /*
     while giving input remeber : 0045 is 45 only
     but here tackling negative numebr will be a problem -> for taht we will use abs(n) before converting to string
    */
}