#include<iostream>
#include<vector>
using namespace std;

/*
Complexity:
The number of valid parentheses combinations is the Catalan number:
C(n) = (1/(n+1)) * C(2n,n)

which is approximately:
O(4^n / n^(3/2))

And every generated string has length 2n.
So if considering the actual output construction:

Time  → O(C(n) × n)
Space → O(C(n) × n)   // storing ans

The recursion depth itself is: O(n)
because the string grows to length 2n.

Pattern connection:
Subsets:
    skip / pick

Parentheses:
    add "(" / add ")"
    with validity conditions
*/

class Solution {
public:
    void generate(string s, int opening, int closing, int n, vector<string>& ans) {
        if(closing == n){
            ans.push_back(s);
            return;
        }
        if(opening < n) generate(s+"(",opening+1,closing,n,ans); // opening
        if(closing < opening) generate(s+")",opening,closing+1,n,ans); // closing
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate("",0,0,n,ans);
        return ans;
    }
};