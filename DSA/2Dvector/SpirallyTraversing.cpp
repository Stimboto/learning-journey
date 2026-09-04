#include<iostream>
#include<vector>
using namespace std;

//Method-1
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {

        vector<int> ans;

        int m = arr.size();
        int n = arr[0].size();

        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;

        while(ans.size() < m * n) {

            // → Top row
            for(int j = minc; j <= maxc; j++) {
                ans.push_back(arr[minr][j]);
            }
            minr++;

            if(ans.size() == m * n) break;

            // ↓ Right column
            for(int i = minr; i <= maxr; i++) {
                ans.push_back(arr[i][maxc]);
            }
            maxc--;

            if(ans.size() == m * n) break;

            // ← Bottom row
            for(int j = maxc; j >= minc; j--) {
                ans.push_back(arr[maxr][j]);
            }
            maxr--;

            if(ans.size() == m * n) break;

            // ↑ Left column
            for(int i = maxr; i >= minr; i--) {
                ans.push_back(arr[i][minc]);
            }
            minc++;
        }

        return ans;
    }
};



//Method-2
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m = mat.size();
        int n = mat[0].size();

        int minr = 0, maxr = m-1;
        int minc = 0, maxc = n-1;

        while(minr <= maxr && minc <= maxc){
            for(int j=minc; j<=maxc; j++) ans.push_back(mat[minr][j]);
            minr++;

            if(minr>maxr || minc>maxc) break;
            for(int i=minr; i<=maxr; i++) ans.push_back(mat[i][maxc]);
            maxc--;

            if(minr>maxr || minc>maxc) break;
            for(int j=maxc; j>=minc; j--) ans.push_back(mat[maxr][j]);
            maxr--;

            if(minr>maxr || minc>maxc) break;
            for(int i=maxr; i>=minr; i--) ans.push_back(mat[i][minc]);
            minc++;

        }
        return ans;
    }
};



int main(){
    /*
     first row
     last col
     last row
     first col

     we need 4 variables i.e minr, minc, maxr, maxc
     TC= O(mn), AS = O(1)
     */
  
}
