#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int lo=0,hi=n-1;
        
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>target) lo=mid+1;
            else if(nums[mid]<target) hi=mid-1;
            else return mid;
        }
     return -1;   

    }
};

int main(){

    /*
     Method-1: just reverse(TC=0(n)) -> then binary search(TC=O(logn)) 
     Method-2: just reverse the condtn of binary serach for ascending order
    */
    
}