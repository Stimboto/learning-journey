#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

/*
Time  = O(n)
Space = O(n)
Two pointers
     ↓
i = beginning of group/word
j = scan until boundary
process [i, j)
i = j
jump to next group
*/
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        vector<string> words;

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

            words.push_back(s.substr(i, j - i));

            // Jump to next word
            i = j;
        }

        string ans = "";

        // Add words in reverse order
        for(int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];

            if(i != 0)
                ans += " ";
        }

        return ans;
    }
};