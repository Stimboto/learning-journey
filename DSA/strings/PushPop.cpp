#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    /*
     just like vector 
    */
  
    string s = "subham";
    s.pop_back();
    s.push_back('k'); //only character
    cout<<s<<endl;

    //each character is number(ASCII) so it will get sort on that basis
    //in a alphabetical or lexographical order if all are small or capital 
    //if both then capital(65-90) comes first then small(97-122)
    sort(s.begin(),s.end()); 
    reverse(s.begin()+1,s.end()-1); //selected reverse
    cout<<s<<endl;
}