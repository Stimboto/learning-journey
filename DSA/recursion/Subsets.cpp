#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void powerSet(int idx, vector<int> ans, vector<int>& arr, vector<vector<int>>& p){
        if(idx == arr.size()){ // I have a subset
            p.push_back(ans);
            return;
        }
        //first skip then pick -> mandatory
        powerSet(idx+1,ans,arr,p); // skip
        ans.push_back(arr[idx]);
        powerSet(idx+1,ans,arr,p); // pick
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<int> ans;
        vector<vector<int>> p;
        powerSet(0,ans,arr,p); 
        return p;
    }
};

/*
So remember this distinction:
Variable	Reference?	         Why
arr	          &	             Don't copy input array
p	          &	             All calls must add to the same answer
ans	          No &	         Each branch gets its own copy
*/


/*
Complexity:
Your recursion generates 2^n subsets, and each subset can contain up to n elements.

Therefore:
Time  → O(n × 2^n)
Space → O(n × 2^n)

O(n × 2^n) space includes the output p
The recursion stack itself is only: O(n)

The pattern to remember:
This is one of the most important recursion patterns:

                    element
                   /       \
                SKIP       PICK
                  |          |
               recurse    recurse

Whenever a problem says something like "for every element, either take it or don't take it", immediately think:
Pick / Skip recursion → 2^n possibilities.
*/