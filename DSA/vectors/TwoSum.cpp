#include<iostream>
#include <vector>
#include <array>

using namespace std;

//Space complexity: O(n) (as we include the space of argument in function if any i.e the space of given data structure eg: here vector v is given)
vector<int> twoSum(vector<int>& v, int target) {
    // vector<int> ans(2); // AS:O(1)
        for(int i=0; i<v.size();i++){
            for(int j=i+1; j<v.size();j++){
                if(v[j] + v[i]== target){
                    // ans[0] =i;
                    // ans[1] =j;
                    // return ans;
                    //also we canform empty array and push_back i and j
                    return {i,j};
                }
            }
        }
    return {0,0};    // doesn't matter (just for the sake) 
}

int main() {
         // TC = O(n^2)
         //  similarly we can do thre sum or so ( loop -> loop -> loop)
         // one input -> one solution, return a vector of indices whose elemnt adds upto target
         // just use loop inside loop -> fix one elmnt and run the loop ahead
}