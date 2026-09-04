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

// //Method-1
// vector<int> twoSum(vector<int>& v, int target) {
//     // vector<int> ans(2);
//         for(int i=0; i<v.size();i++){
//             for(int j=i+1; j<v.size();j++){
//                 if(v[j] + v[i]== target){
//                     // ans[0] =i+1;
//                     // ans[1] =j+1;
//                     // return ans;
//                     //also we can form empty array and push_back i and j
//                     return {i+1,j+1};
//                 }
//             }
//         }
//     return {0,0};    // doesn't matter (just for the sake) 
// }


//Method-2
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans(2);
        int n=arr.size();
        int i=0, j=n-1;

        while(i<j){
            if(arr[i]+arr[j] > target) j--;
            else if(arr[i]+arr[j] < target) i++;
            else{
                ans[0]= i+1;
                ans[1]= j+1;
                break;
            } 
        }
        return ans; //TC=O(n)
    }
};

int main() {
    vector<int> arr = {93,17,4,64,46,18,3,61};
    int n = arr.size();
    /*
     "Sorted version of two sum"
     Method-1: just how we i normal two sum TC: O(n^2)
     Method-2: two pointers method TC: O(n) -> 3 condtns
    */
}

    
