#include<iostream>
using namespace std;
int main(){
    int arr[] = {74,96,9,57,62,35,5,1,88,34};
    // int arr[] = {5,-6,-9};
    int n = sizeof(arr)/4;
    
    long long prod =1;
    for(int i=0; i<n; i++){
        prod *= arr[i];
    }
    cout<<prod;
}