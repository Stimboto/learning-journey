#include<iostream>
#include<vector>
using namespace std;

/*
Complexity:
There are 2^n possible subsets.
Every recursive branch does O(1) work, so:

Time  → O(2^n)
Space → O(2^n)

The O(2^n) space is mainly for storing the 2^n answers in ans.
Recursion stack itself: O(n)

The key connection:
SUBSETS

        skip
       /
element
       \
        pick

and now:
SUBSET SUMS

        sum
       /   \
    skip   pick
     sum   sum + arr[idx]
*/

class Solution {
public:

    void generate(int idx, int sum, vector<int>& arr, vector<int>& ans) {

        // All elements considered
        if(idx == arr.size()) {
            ans.push_back(sum);
            return;
        }

        // Skip current element
        generate(idx + 1, sum, arr, ans);

        // Take current element
        generate(idx + 1, sum + arr[idx], arr, ans);
    }

    vector<int> subsetSums(vector<int>& arr) {
        vector<int> ans;

        generate(0, 0, arr, ans);

        return ans;
    }
};