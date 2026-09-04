#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// class Solution {
// public:
//     int upperBound(vector<int>& arr, int target) {

//         return upper_bound(arr.begin(), arr.end(), target)
//               - arr.begin();
//     }
// };

//Method-2
class Solution {
public:
    int upperBound(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0, hi = n - 1;
        int ub = n;

        while(lo <= hi) {
            int mid = (lo + hi) / 2;
            if(arr[mid] <= target) lo = mid + 1;
            else {
                ub = mid;
                hi = mid - 1;
            }
        }
        return ub;
    }
};


int main(){
    /*
    1. The upper bound of a number is defined as the smallest index in the sorted array where the element is greater than the given number.
    2. built in function: 
           return upper_bound(arr.begin(), arr.end(), target)- arr.begin();
   
    */
}