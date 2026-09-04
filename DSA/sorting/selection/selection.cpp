#include <vector>
#include <array>
#include<iostream>
#include<climits>
using namespace std;

void print(vector<int>& arr){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> arr={7,4,9,1,3,6,2,5};
    int n=arr.size();
    print(arr);

    //selection sort
    //Method-1
    for(int i=0;i<n-1;i++){
        int mn=arr[i], mnIndx = i;
        for(int j=i;j<n;j++){
            if(arr[j]<mn){
                mn = arr[j];
                mnIndx = j;
            }
        }
        swap(arr[i],arr[mnIndx]);
    }
    print(arr);

    //Method-2
    // for(int i=0; i<n-1;i++){
    //     int mn = INT_MAX;
    //     for(int j=i;j<n;j++){
    //         mn = min(mn,arr[j]);
    //     }
    //     for(int j=i;j<n;j++){
    //         if(mn == arr[j]){
    //             swap(arr[i],arr[j]);
    //         }
    //     }
        
    // }
    // print(arr);
    
    /*
     0. total passes = n-1
     1. total swaps = n-1
     2. we place the smallest at its right place( 1 pass, 1 swap)
     3. find min elemnt with its index -> swap it with first elmnt -> array iteration decreased( frist elmnt got out)
     4. TC = O(n^2) (in all best,avg,worst)
        AS = O(1)
    */
   
}