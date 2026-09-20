#include<iostream>
#include<vector>
using namespace std;


/*
Before:
Time  = O(2^n)
Space = O(n)

With memoization:
Time  = O(n)
Space = O(n)
*/

/*
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        return climbStairs(n-1) + climbStairs(n-2);
    }
};
*/

class Solution {
public:
    int solve(int n, vector<int>& dp) {
        if(n <= 2)
            return n;

        if(dp[n] != -1)
            return dp[n];

        dp[n] = solve(n-1, dp) + solve(n-2, dp);

        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};