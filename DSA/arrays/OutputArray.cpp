#include<iostream>
using namespace std;
int main(){
    //int arr[10]; // Default garbage values
    // int arr[10] = {}; // Default 0
    // int arr[]; // error as we've to give size or initialize
    int arr[] = {74,96,9,57,62,35,5,1,88,34,90,103};
    int n = sizeof(arr)/4;

    // traversing on array via loop
    for(int i=0;i<=n-1;i++){ // 0 to n-1
        cout<<arr[i]<<" ";
    }
}