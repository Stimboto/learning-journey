#include<iostream>
#include<string>
using namespace std;
int main(){
    
string s;
getline(cin,s);
int n = s.size();
for(int i=0;i<n;i++){
    //somany times said character can be compared to integer
    if(s[i]>=65 and s[i]<=90) s[i] +=32;
    else if(s[i]>=97 and s[i]<=122) s[i] -=32;
}
cout<<s<<endl;
    /*
     small -> capital and vice versa
     other characters won't chnage that much
    */
}