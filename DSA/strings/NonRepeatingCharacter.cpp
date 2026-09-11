#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;



//Method-1 -> nested loops TC = O(n^2)
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        int n = s.length();

        for(int i = 0; i < n; i++){
            int count = 0;

            for(int j = 0; j < n; j++){
                if(s[i] == s[j])
                    count++;
            }

            if(count == 1)
                return s[i];
        }

        return '$';
    }
};


//Method-2 -> Frequency array TC = O(n)
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        vector<int> freq(26, 0);

        // Count frequency
        for(char ch : s){
            int index = ch - 'a';
            freq[index]++;
        }

        // Find first character with frequency 1
        for(char ch : s){
            int index = ch - 'a';

            if(freq[index] == 1)
                return ch;
        }

        return '$';
    }
};
int main(){

}
    
