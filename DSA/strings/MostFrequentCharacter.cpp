#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

/*
//Method-1
int main(){
    string s;
    getline(cin,s);
    int n = s.length();

    
    int maxFreq = 0;
    char ch;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(s[i] == s[j])
                count++;
        }
        if(count > maxFreq){
            maxFreq = count;
            ch = s[i];
        }
    }
    cout << maxFreq << " " << ch;
}
*/

//Method-2
class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        int n = s.length();
        vector<int> freq(26,0);
        for(char ch:s){
            int indx = ch-97;
            freq[indx]++;
        }
        int maxFreq = 0;
        for(int i=0;i<26;i++){
            maxFreq = max(freq[i],maxFreq);
        }
        for(int i=0;i<26;i++){
            if(freq[i]==maxFreq)
             return (char)(i+97);
        }
        return s[0];
    }
};
    /*
    Method-1 -> using nested loop
    Method-2 -> using frequency array
    */
