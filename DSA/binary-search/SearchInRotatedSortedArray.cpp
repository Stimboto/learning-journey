#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n= arr.size();
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]==target) return mid;
            if(arr[lo]<=arr[mid]){ // left half is sorted
                if(arr[lo] <= target && target <= arr[mid]) hi=mid-1;
                else lo =mid+1;
            }
            else{ // right half is sorted 
                if(arr[mid] <= target && target <= arr[hi]) lo=mid+1;
                else hi=mid-1;
            }
        }
        return -1;
    }
};

int main(){

    /*
     0. mid ke left ya right mein se ek half sorted jaroor hoga
     1. in specific half sorted part -> find if tar lies betwn mid and hi or lo and mid

     2. method-2 -> find the pivot elemnt using 2 binary search (in 2logn time)
    */
}