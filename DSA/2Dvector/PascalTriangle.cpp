#include<iostream>
#include<vector>
using namespace std;

//Method-1
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(vector<int>(i,1));
        }
        // Fill the pascals triangle
        for(int i=2;i<ans.size();i++){
            //for(int j=0;j<ans[i].size();j++){
            for(int j=1;j<ans[i].size()-1;j++){
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
    }
};

//Method-2
// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {

//         vector<vector<int>> ans(numRows);

//         // Create rows and fill them with 1
//         for(int i = 0; i < numRows; i++) {
//             ans[i] = vector<int>(i + 1, 1);
//         }

//         // Fill the middle elements
//         for(int i = 1; i < numRows; i++) {
//             for(int j = 1; j < i; j++) {
//                 ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
//             }
//         }

//         return ans;
//     }
// };


// Method-3
// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {

//         vector<vector<int>> ans;

//         for(int i = 1; i <= numRows; i++) {
//             ans.push_back(vector<int>(i, 1));
//         }

//         // Fill the Pascal triangle
//         for(int i = 0; i < ans.size(); i++) {

//             for(int j = 0; j < ans[i].size(); j++) {

//                 if(j != 0 && j != i) {
//                     ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
//                 }

//             }
//         }

//         return ans;
//     }
// };


int main(){
    /* 
     here each elemnt will be as follows: 
     arr[i][j] = arr[i-1][j-1] + arr[i-1][j]
     also we can put iCj in every elemnet (ignore)
    */

}