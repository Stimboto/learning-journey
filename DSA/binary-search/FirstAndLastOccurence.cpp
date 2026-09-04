#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int n=nums.size();

        //first occurence
        int lo=0,hi=n-1;
        while(lo<hi){ //O(logn)
            int mid=(lo+hi)/2;
            if(nums[mid]>target) hi=mid-1;
            else if(nums[mid]<target) lo=mid+1;
            else{ //nums[mid] == target
                ans[0] = mid;
                hi=mid-1;
            }
        }


        //last occurence
        lo=0;
        hi=n-1;
        while(lo<hi){ //O(logn)
            int mid=(lo+hi)/2;
            if(nums[mid]>target) hi=mid-1;
            else if(nums[mid]<target) lo=mid+1;
            else{ //nums[mid] == target
                ans[1] = mid;
                lo=mid+1;
            }
        }
        return ans;
    }
};

int main(){

    //non-decreasing order -> can be ascending or equal
    
}