#include <vector>
#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    int intersectSize(vector<int> &a, vector<int> &b) {

        sort(a.begin(), a.end()); //AS:O(logn)
        sort(b.begin(), b.end());

        int m = a.size();
        int n = b.size();

        int i = 0, j = 0;
        int count = 0;

        while(i < m && j < n) {

            if(a[i] == b[j]) {
                count++;
                i++;
                j++;
            }
            else if(a[i] < b[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return count;
    }
};