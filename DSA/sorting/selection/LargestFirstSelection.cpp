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

    vector<int> arr = {7,4,9,1,3,6,2,5};

    int n = arr.size();

    print(arr);

    //Method-1
    for(int i = 0; i < n-1; i++) {

    int maxIndex = 0;

    for(int j = 0; j < n-i; j++) {
        if(arr[j] > arr[maxIndex]) {
            maxIndex = j;
        }
    }

    swap(arr[maxIndex], arr[n-1-i]);
    }



    //Method-2
    // for(int i = 0; i < n-1; i++) {

    //     int mx = INT_MIN;
    //     int maxIndex = -1;

    //     // Find maximum in unsorted part
    //     for(int j = 0; j < n-i; j++) {

    //         if(arr[j] > mx) {
    //             mx = arr[j];
    //             maxIndex = j;
    //         }
    //     }

    //     // Put maximum at correct position
    //     swap(arr[maxIndex], arr[n-1-i]);
    // }

    print(arr);

    /*
    0. Apply sleection sort such that the largest gets in the right place and so on.
    1. find largest -> swap with last
    */
   
}