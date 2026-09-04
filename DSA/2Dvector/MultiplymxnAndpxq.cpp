#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<vector<int>> multiplyMatrices(vector<vector<int>> &a, vector<vector<int>> &b) {
        int m = a.size();
        int n = a[0].size();

        int p = b.size();
        int q = b[0].size();

        vector<vector<int>> res(m,vector<int>(q,0));

        for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            for(int k = 0; k < n; k++) { //n==p always
                res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

    return res;
    }
};

int main(){
    //multiply 2 matrices of order mxn & pxq where(n==p)
    /*
       A   ×   B   =   Result
      m×n     p×q      m×q
    */

    
}
