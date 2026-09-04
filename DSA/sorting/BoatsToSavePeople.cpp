#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       //sort -> two pointer method
       int boats= 0;
       int n=people.size();
       sort(people.begin(),people.end());

       int i=0,j=n-1;
       while(i<j){
            if(people[i]+people[j]<=limit){
                boats++;
                i++;
                j--;
            }
            else{
                boats++;
                j--;
            }
       }
       if(i == j) boats++;
       return boats;

    }
};