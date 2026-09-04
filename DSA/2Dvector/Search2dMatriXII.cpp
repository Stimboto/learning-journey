#include<iostream>
#include<vector>
using namespace std;

//Method-1 -> TC = O(mn)
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& mat, int target) {
//         int m = mat.size();
//         int n = mat[0].size();
        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(mat[i][j]==target) return true;
//             }
//         }
//         return false;
//     }
// };


//Method-2 -> TC=O(m+n) staircase search
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();

        int i=0,j=n-1;
        while(i<m && j>=0){ //all elemnts covered 
            if(mat[i][j]>target) j--;
            else if(mat[i][j]<target) i++;
            else return true;
        }  
        return false;      
    }
};

int main(){
   //Method-1 -> just search with TC=O(mn) //works even for arbitrary arrays
   //Method-2 -> just serach in TC=O(m+n) //doesn't work for arbitrary arrays
    
}
