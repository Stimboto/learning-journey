#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// class Solution {
// public:
//     int findFloor(vector<int>& arr, int x) {
//         return upper_bound(arr.begin(), arr.end(), x) - arr.begin() - 1;
//     }
// };

//Method-2
class Solution {
public:
    int findFloor(vector<int>& arr, int x) {
        int n = arr.size();
        int lo = 0, hi = n - 1;
        int ans = -1;

        while(lo <= hi) {
            int mid = (lo + hi) / 2;
            if(arr[mid] <= x) {
                ans = mid;       // possible floor
                lo = mid + 1;    // look for a later one
            }
            else {
                hi = mid - 1;    // too large
            }
        }

        return ans;
    }
};

int main(){
    /*
      Floor = upper_bound(x) - 1
    */
}