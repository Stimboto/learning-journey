#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

/*
Time  = O(n)
Space = O(n)
i = start of word
        ↓
j = find end of word
        ↓
process [i, j)
        ↓
i = j
        ↓
jump to next word
*/

class Solution {
public:
    string reverseEachWords(string &s) {
        int n = s.length();
        string ans = "";
        int i = 0;

        while(i < n) {

            // Skip spaces
            while(i < n && s[i] == ' ')
                i++;

            if(i == n)
                break;

            int j = i;

            // Find end of word
            while(j < n && s[j] != ' ')
                j++;

            // Reverse current word
            reverse(s.begin() + i, s.begin() + j);

            // Add word to answer
            if(!ans.empty())
                ans += ' ';

            ans += s.substr(i, j - i);

            // Jump to next word
            i = j;
        }

        return ans;
    }
};