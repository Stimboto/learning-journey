#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n - 1;

        // nums = [1,3,5,6], target = -7
        //if(target<nums[0]) return 0;

        // nums = [1,3,5,6], target = 9 
        //if(target>nums[n-1]) return n;

        while(lo <= hi) {
            int mid = (lo+hi) / 2;
            if(nums[mid] > target) hi=mid-1;
            else if(nums[mid] < target) lo=mid+1;
            else return mid;
        }

        //the target would've been at lo index
        return lo;
    }
};

int main(){
    /*
     
    */
}