#include<iostream>
#include<vector>
using namespace std;

/*
Time  → O(2^(m+n)) approximately
Space → O(m+n)

class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 or n==1) return 1;
        return uniquePaths(m,n-1) + uniquePaths(m-1,n);
    }
};
*/


/*
Time  → O(m × n)
Space → O(m × n) + O(m+n) recursion stack
*/
class Solution {
public:
    int solve(int m, int n, vector<vector<int>>& dp) {
        if(m == 1 || n == 1)
            return 1;

        if(dp[m][n] != -1)
            return dp[m][n];

        dp[m][n] = solve(m-1, n, dp) + solve(m, n-1, dp);

        return dp[m][n];
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

        return solve(m, n, dp);
    }
};



/*
Climb Stairs:
ways(n) = ways(n-1) + ways(n-2)

Unique Paths:
ways(m,n) = ways(m-1,n) + ways(m,n-1)
*/


void printPaths(int m, int n, string path) {

    // Reached destination
    if(m == 1 && n == 1) {
        cout << path << endl;
        return;
    }
    // Move Right
    if(n > 1) {
        printPaths(m, n - 1, path + "R");
    }
    // Move Down
    if(m > 1) {
        printPaths(m - 1, n, path + "D");
    }
}

int main() {
    int m = 3, n = 3;
    printPaths(m, n, "");
}