#include<iostream>
#include <vector>
#include <array>
#include<algorithm>

using namespace std;

//Method-3 -> we use carry = 1
//Option-A
// vector<int> plusOne(vector<int>& digits) {

//     int carry = 1;
//     vector<int> ans;

//     for(int i = digits.size() - 1; i >= 0; i--) {

//         digits[i] += carry;

//         if(digits[i] == 10) {
//             digits[i] = 0;
//             carry = 1;
//         }
//         else carry = 0;
//         ans.push_back(digits[i]);
//     }

//     if(carry == 1) ans.push_back(1);
//     reverse(ans.begin(), ans.end());

//     return ans;
// }

//Option-B
vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        vector<int> ans;
        for(int i=digits.size()-1;i>=0;i--){
            int sum = digits[i] + carry;
            if(sum<10){
                carry = 0;
                ans.push_back(sum);
            }
            else{
                carry = 1;
                ans.push_back(0);
            }
        }
        if(carry == 1) ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }

//Method-2 -> we store integre in array when it can't be in existing data types( int, long long)
// vector<int> plusOne(vector<int>& digits) {

//     //addition bydefault from right -> left
//     for(int i = digits.size() - 1; i >= 0; i--) {

//         if(digits[i] < 9) {
//             digits[i]++;
//             return digits;
//         }

//         digits[i] = 0;
//     }

//     // insert function -> digits.insert(position, value);
//     digits.insert(digits.begin(), 1);

//     return digits;
// }


//Method-1 -> works only on small numbers until and unless int, long long can bear the integer
// vector<int> plusOne(vector<int>& digits) {
//         int fdg = 0;
//         int val = 10;
//         for(int i=0; i<digits.size();i++){
//             fdg = fdg*val + digits[i];
            
//         }

//         int total = fdg +1;
        
//         vector<int> v;
//         while(total>0){
//             v.push_back(total%10);
//             total /= 10;
//         }
//         reverse(v.begin(), v.end());

//     return v;
// }


int main() {
    vector<int> vect = {0};
    vector<int> ans = plusOne(vect);
    for(int ele:ans){
        cout<<ele<<" ";
    }
    

}