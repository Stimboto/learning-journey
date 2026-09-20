#include<iostream>
#include<vector>
using namespace std;

/*

Jo kaam hum loop se kar sakte hain, uska recursive version aksar banaya ja sakta hai.
Loop ko recursion mein convert karna seekho by replacing the loop's changing variable with a function parameter.
Loop:
initialization
     ↓
condition
     ↓
work
     ↓
increment
     ↓
condition
     ↓
...

Recursion:
initialization → function argument
condition      → base case
work           → function ka kaam
increment      → recursive call mein i+1

---------------------------------------------
for loop       |             recursion
---------------------------------------------
i = 0          →     function(i = 0)
i < n          →     if(i == n) return
work           →     work
i++            →     function(i + 1)

*/

class Solution {
public:
    int binary(int lo, int hi, int target, vector<int>& arr) {
        if(lo > hi) return -1;
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] > target) return binary(lo,mid-1,target,arr);
        else if(arr[mid] < target) return binary(mid+1,hi,target,arr);
        else return mid;
    }
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        return binary(0,n-1,target,arr);
    }
};

/*
via recursion:
Time  → O(log n)
Space → O(log n)  //recursion stack

via loop:
Time  → O(log n)
Space → O(1)
*/