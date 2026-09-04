#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int n= arr.size();
        int lo=0,hi=n-1;
        int lb=0;

        if(arr[n-1]<target) return n;
        
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(arr[mid]<target) lo=mid+1;
            else{
                lb=mid;
                hi=mid-1;
            }
        }
        return lb;
    }
};

//Method-2
// class Solution {
// public:
//     int lowerBound(vector<int>& arr, int target) {

//         auto x = lower_bound(arr.begin(), arr.end(), target);
//         return x - arr.begin();
//     }
// };


int main(){
    /*
    1. The lower bound of a number is defined as the smallest index in the sorted array where the element is greater than or equal to the given number.
    2. lb also gives first occurence index of given elmnt if target exists, otherwise smallest elmnt index which is > target

    3. built in function: 
        //lower_bound() does not return an integer index. It returns an iterator.
        //int lb = lower_bound(arr.begin(),arr.end(),target)-arr.begin();
        //auto x = lower_bound(arr.begin(),arr.end(),target);
          cout<<*x; //using dereference operator
          return x-arr.begin();
        //x    → position
          *x   → value at that position
    4. An iterator is basically an object that lets you point to an element of a container.
        Think of it like a pointer moving through the vector.
        vector<int>::iterator it;
        You can make it point to the beginning:
        it = arr.begin();
    */
}