#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int lo=1,hi=n-2;  //just because we're using arr[mid-1] and arr[mid+1]
                          //also there'll definetly be mountain (no need to put BS on first and last elmnt)

        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
                lo=mid+1;
            }
            else if(arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1]){
                hi=mid-1;
            }
            else return mid;
        }
        return 0; //doesn't matter
    }
};

int main(){
    /*
     Mountain array -> not symmetrical always -> can be of any size 
     atleast length 3 bcs elmnts must be on left and right of peak
     peak -> local maxima
    */
}