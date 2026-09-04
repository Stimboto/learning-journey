#include <vector>
#include <array>
#include <algorithm>

using namespace std;

class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1-i;j++){
                swap(mat[i][j],mat[n-1-j][n-1-i]);
            }
        }

        for(int i=0;i<n;i++){
                int s=0,e=n-1;
                while(s<e){
                    swap(mat[i][s], mat[i][e]);
                    // int temp = mat[i][s];
                    // mat[i][s] = mat[i][e];
                    // mat[i][e] = temp;
                    s++;
                    e--;
                }
        }
        
    }
};


int main() {
    /*
    transpose at opp diagonal(just swap mat[i][j] ↔ mat[n - 1 - j][n - 1 - i]) -> reverse
    */
}    

