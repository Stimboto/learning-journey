#include<iostream>
#include<string>
using namespace std;
int main(){
    /*
     s.front() -> for fist elmnt
     s.back() -> for back elmnt
     consider it as a vector
     this is useful incase of we want to iterate
    */
   string s ="stim boto";
   int n = s.size();
   for(int i=0;i<n;i++){
    cout<<s[i];
   }

   //but for loop is better than for-each (already discussed)
   for(char ele:s){
    cout<<ele;
   }

}