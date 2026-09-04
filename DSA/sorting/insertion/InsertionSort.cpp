#include <vector>
#include <iostream>
using namespace std;

void print(vector<int>& arr) {
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {7,4,9,1,3,6,2,5};
    int n = arr.size();

    print(arr);
    //Ascending Order
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }


    //Descending Order
    // for(int i = 1; i < n; i++) {
    //     int j = i;

    //     while(j > 0 && arr[j-1] < arr[j]) {
    //         swap(arr[j-1], arr[j]);
    //         j--;
    //     }
    // }

    print(arr);
}

    /*
      sorted(bydeault first elemnt) and unsorted part -> just compare 1st elmnt of unsorted part 
                                                         and sorted part(start from last elmnt)
                                                         and then place it at the right place.
      
      7 | 4 9 1 3 6 2 5   
      Avg: O(n^2)
      Worst: O(n^2)
      best: O(1)

      1. TC is given above, As remains O(1)
      2. if array is already sorted or nearly sorted then inner loop
         of insertion doen't even begin
      3. insertion sort is stable ( better bubble version)


                                                         
    */
