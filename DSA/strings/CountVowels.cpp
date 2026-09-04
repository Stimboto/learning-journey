#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();

    //string is mutable in cpp -> we can change individual character
    //never chnage string to lower or upper directly, u can but on copy (it'll take extra space O(n))
    int count =0;
    for(int i=0;i<n;i++){
        char ch = s[i];
        if(ch>=65 and ch <=90) ch +=32; //now no need to write capital ones
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') count++;

        // if(ch == 'a') count++;
        // else if(ch == 'e') count++;
        // else if(ch == 'i') count++;
        // else if(ch == 'o') count++;
        // else if(ch == 'u') count++;
        // else if(ch =='A') count++;
        // else if(ch =='E') count++;
        // else if(ch =='I') count++;
        // else if(ch =='O') count++;
        // else if(ch =='U') count++;
    } 
    cout<<count;
}