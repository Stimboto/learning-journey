#include<iostream>
#include<vector>
using namespace std;

//Method-1
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<vector<int>> copy = mat; //extra AS=O(mn) and TC=O(mn)
        int m=mat.size();
        int n=mat[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(copy[i][j]==0){ //set ith row and jth col to 0
                    //set ith row to 0
                    for(int col = 0;col<n;col++){
                        mat[i][col]=0;
                    }
                    //set jth col to 0
                    for(int row = 0; row<m;row++){
                        mat[row][j]=0;
                    }
                }
            }
        }
    }
};

//Method-2
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<bool> row(m,false);
        vector<bool> col(n,false);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] ==0 ){
                    row[i] =true;
                    col[j] =true;
                }
            }
        }
        for(int i=0; i<m;i++){
            if(row[i]==true){ //set ith row to 0
                for(int j=0;j<n;j++){
                    mat[i][j]=0;
                }
            }
        }
        for(int j=0; j<n;j++){
            if(col[j]==true){ //set ith row to 0
                for(int i=0;i<m;i++){
                    mat[i][j]=0;
                }
            }
        }
    }
};

//Method-2
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        
    }
};


int main(){
   /*
    Method-1 -> tranverse in copy and do changes in mat 
                //TC = O(mn(m+n)) or O(n^3), AS = O(mn)
    Method-2 -> traverse and make two bool arrays(row,col) and mark true where it's 0, then fill 0s in those rows and cols later 
                //TC = O(mn) i.e 3mn times, AS= O(m+n)
    Method-3 -> use first row as row vector and 1st col as col and proceed exactly like method-2
                but remember if tehre was already 0 in 0th row or col (take care of this as well)
                //TC=O(mn), AS=O(1) no extra space
    */           
}
