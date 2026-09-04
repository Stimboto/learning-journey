#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<int> commonElements(vector<int> &a, vector<int> &b) {

        int n = a.size();
        int m = b.size();

        vector<int> ans;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;

        while(i < n && j < m) {

            if(a[i] == b[j]) {
                ans.push_back(a[i]);
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

        return ans;
    }
};

int main() {
    vector<int> arr = {93,17,4,64,46,18,3,61};
    int n = arr.size();

    /*
     Hint: Sorting -> use two variables -> 3 condtns
    */
    
}

    
