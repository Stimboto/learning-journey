#include<iostream>
#include<string>
using namespace std;
int main(){
    /*
     ASCII of 0 is 48 and of 9 is 57
     Method-1 -> without built in functions
     Method-2 -> with built in -> to_string() function to convert directly to string 
    */
   int n;
   cout<<"enter a number: ";
   cin>>n;

   //takes care of positive and negative numbers bydefault
   //string s = to_string(n); //TC = O(n) where n is number of digits
   //cout<<s<<endl;
   
   
   bool negative = false;
   if(n < 0) {
       negative = true;
       n = -n;
   }

   string s="";
   while(n !=0){
        //traversing number -> from back
        int lastDigit = n%10; 
        char ch = lastDigit + 48;
        s.push_back(ch);
        n /=10;
   }
   //reverse -> can also make the number reverse initially
   int i=0,j=s.length()-1;
   while(i<j){
    swap(s[i],s[j]);
    i++;
    j--;
   }

   if(negative)
        cout << "-" << s << endl;
   else
        cout << s << endl;
   
}