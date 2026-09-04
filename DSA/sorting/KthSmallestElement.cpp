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

class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        int n= arr.size();

        //Method-1
        sort(arr.begin(),arr.end());
        return arr[k-1];

        //Method-2
        // for(int i=0;i<k;i++){ //k passes
        //     int mn = arr[i], minIndx = i;
        //     for(int j=i;j<n;j++){
        //         if(mn<arr[j]){
        //             mn=arr[j];
        //             minIndx = j;
        //         }
        //     }
        //     swap(arr[i],arr[minIndx]);
        // }
        // return arr[k-1];
    }
};

int main() {
    vector<int> arr = {93,17,4,64,46,18,3,61};
    int n = arr.size();

    /*
    Method-1: sort(using built in sort) -> return k-1 index elmnt
              TC=O(nlogn) much much beeter than method 2
              n.k > n.logn
              

    Method-2: just run k passes of selction sort algo
              TC=O(n*k) (better than O(n^2))
    */

}

    
