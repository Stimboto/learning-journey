#include <vector>
#include <array>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        //Transpose
        for(int i=0; i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // Reverse each row
        for(int i=0;i<n;i++){
            // reverse(matrix[i].begin(), matrix[i].end());
            int s=0,e=n-1;
            while(s<e){
                //swap(matrix[i][s], matrix[i][e]);
                int temp = matrix[i][s];
                matrix[i][s] = matrix[i][e];
                matrix[i][e] = temp;
                s++;
                e--;
            }

        }
    }
};

int main() {
    /*
     just transpose ->  then reverse
    */
}    

