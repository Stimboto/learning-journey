#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//Method-1 -> TC = O(nlogn)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false; //TC = O(1) in such cases
        sort(s.begin(),s.end()); //TC = O(nlogn)
        sort(t.begin(),t.end()); //TC = O(nlogn)
        return (s==t);

        /*
        if(s==t) return true;   //TC = O(n)
        else return false;
        */
        
    }
};

int main(){
    /*
     Method-1 -> sort and compare
     Method-2 -> via hash map(later)
     jumbled words of same letters -> length of both must be same 
     heart,earth
     tea,ate
     lemon,melon
     state,taste
     listen,silent
     stone,notes
     elbow,below
     night,thing
    */
}