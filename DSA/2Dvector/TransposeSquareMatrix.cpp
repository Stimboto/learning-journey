#include <vector>
#include <array>

using namespace std;

class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int m = arr.size(), n = arr[0].size(); //here m=n
        for(int i=0;i<m;i++){
            for(int j=0;j<i;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        return arr;
    }
};

int main() {
    // just swap rows & cols
    // mirror image along diagonal 

    /*
    vector<vector<int>> v;
    int cols = v[0].size();
    int row = v.size();

    */ 
}    

