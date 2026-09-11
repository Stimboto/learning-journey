#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
/*
Time  → O(n)
Space → O(1) extra
*/


 /* 
 string longestWord(string s) {
    int n = s.length();
    int i = 0;
    int maxLen = 0;
    string ans = "";

    while(i < n) {
        int j = i;
        // Move j until space or end
        while(j < n && s[j] != ' ') {
            j++;
        }
        // Current word = s[i ... j-1]
        if(j - i > maxLen) {
            maxLen = j - i;
            ans = s.substr(i, j - i);
        }
        // Jump to next word
        i = j + 1;
    }

    return ans;
}
 */



int main(){
    //we also have separate function above
    string s = "   Arjun    is  the smartest";
    int n = s.length();
    int i = 0, j = 0, maxlen = 0;
    string ans = "";
    while(j < n){
        if(s[j] != ' ') j++;
        else{
            int len = j-i;
            if(len > maxlen){
                maxlen = len;
                ans = s.substr(i,len);
            } 
            // Jump to next word's starting
            i = j; // i and j are both at space
            while(i<n && s[i]==' '){
                i++;
                j++;
            }
        }
    }
    //or u can insert one apce at last
    int len = j-i;
    if(len > maxlen){
        maxlen = len;
        ans = s.substr(i,len);
    } 
    cout<<maxlen<<" "<<ans<<endl;
}

 /*
 two pointer technique
 1. i at start and j at last and then both moves
 2. i and j keeps moving forward together
 3. jumping two pinter technique(variable size slidijng window) -> this we'll use here
 */

    
