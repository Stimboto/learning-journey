#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;

void print(vector<int>& arr) {
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
}

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int ans1 = 0;
        int ans2 = 0;

        // Count elements of nums1 that exist in nums2
        int i = 0, j = 0;

        while(i < m && j < n) {

            if(nums1[i] == nums2[j]) {
                ans1++;
                i++;
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        // Count elements of nums2 that exist in nums1
        i = 0;
        j = 0;

        while(i < m && j < n) {

            if(nums1[i] == nums2[j]) {
                ans2++;
                j++;
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return {ans1, ans2};
    }
};

int main() {
    vector<int> arr = {93,17,4,64,46,18,3,61};
    int n = arr.size();

    
    
}

    
