#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//TC=O(n)
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        //using lower/upper bound
         int neg = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int firstPos = upper_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int pos = nums.size() - firstPos;

        return max(neg, pos);
        
    }
};

//Method-2 -> TC=O(logn)
class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n = nums.size();

        // first index having >= 0
        int lo = 0, hi = n - 1;
        int firstNonNegative = n;

        while(lo <= hi) {
            int mid = (lo + hi) / 2;

            if(nums[mid] < 0)
                lo = mid + 1;
            else {
                firstNonNegative = mid;
                hi = mid - 1;
            }
        }

        // first index having > 0
        lo = 0;
        hi = n - 1;
        int firstPositive = n;

        while(lo <= hi) {
            int mid = (lo + hi) / 2;

            if(nums[mid] <= 0)
                lo = mid + 1;
            else {
                firstPositive = mid;
                hi = mid - 1;
            }
        }

        int neg = firstNonNegative;
        int pos = n - firstPositive;

        return max(neg, pos);
    }
};


//Method-3 -> TC=O(n), AS=O(1)
// class Solution {
// public:
//     int maximumCount(vector<int>& nums) {

//         int neg = 0;
//         int pos = 0;

//         for(int x : nums) {
//             if(x < 0) neg++;
//             else if(x > 0) pos++;
//         }

//         return max(neg, pos);
//     }
// };