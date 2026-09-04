#include<iostream>
#include <vector>
#include<algorithm>
#include <array>

using namespace std;


//Method-2 -> O(n^2)
int missingNumber(vector<int>& v) {
    
     int n = v.size();
    //both 0 and n included in range [0,n]
    for(int i=0; i<=n;i++){
        // i isn't present and this statmnt must be here only
        bool flag = false; 
        for(int ele: v){
            if(ele == i){
                flag =true;
                //breaks current one
                break; 
            }
        }
        if(flag == false) return i;
    }
    //doesn't matter (it's mandatory to writye tis although the answer would go from above return only)
    return 0; 
}


//Method-1 -> O(n)
// int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int sum = n*(n+1)/2;
//         int act_sum = 0;
        
//         for(int i=0; i<n; i++){
//             act_sum += nums[i]; 
//         }
//         int mis_num = sum - act_sum;

//     return mis_num;  
// }


//Method-3 -> O(nlogn+n) ~ O(nlogn)
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end()); //TC=O(nlogn)
    for(int i=0; i<n; i++){ //TC=O(n)
        if(i != nums[i]) return i;
    }
    return n;
}

//Method-4 -> TC = O(n) and AS = O(n)
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    vector<bool> v(n+1,false);

    for(int i=0;i<n;i++){
        v[nums[i]] == true;
        // for(int j=0; j<=n; j++){
        //     if(nums[i] == j) v[j] = true;
        // }
    }
    for(int j=0; j<=n; j++){
            if(v[j]== false) return j;
    }

    return 0; //doen't matter here 
}

int main() {
    //Method-2 -> nested loops
    //Method-1 -> using one loop + sum_of_n - actual_Sum
    //Method-3 -> sorting
    //Method-4 -> extra auxiliary space(AS) just to solve it fast via making bool array of n+1 size [0,n]
      
}