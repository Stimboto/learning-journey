#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int lo=0,hi=n-1;

        //numbers in ascending order
        //TC: O(logn) -> superfast compared to O(n)
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>target) hi=mid-1;
            else if(nums[mid]<target) lo=mid+1;
            else return mid;
        }
        return -1;
    }
};

int main(){

    /*
     |. GP: n -> n/2 -> n/4 -> n/8 ... 2 -> 1 (TC: total no of terms = logn )
     0. not exact divide and conquer
     1. binary search reduces the search space
     2. the mid = (lo + hi)/2 i.e more specifically left middle
     3. 3 cindn: arr[mid]>tar -> go left-> hi=mid-1(take hi here),
                 arr[mid]<tar -> go right -> lo=mid+1(take lo here),
                 arr[mid]=tar -> return true


     4. to avoid int mid overflow  we use mid = lo + (hi-lo)/2          
        binary search is not for arrays only

    */
}