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
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> ans;
        int m=a.size(),n=b.size();

        int i=0,j=0;
        while(i<m && j<n){
            if(a[i]==b[j]){
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                ans.push_back(a[i]);
                ans.push_back(b[j]);
                i++;
            }
            else{
                ans.push_back(a[i]);
                ans.push_back(b[j]);
                j++;
            }
        }
        
    }
};

int main() {
    vector<int> arr = {93,17,4,64,46,18,3,61};
    int n = arr.size();

    
    
}

    
