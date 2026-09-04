#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {-62,-35,-5,-1,-88,-34};
    int n = sizeof(arr)/4;
    
    int mn = INT_MAX;
    for(int i=0; i<n; i++){
        mn = min(mn,arr[i]);
    }
    cout<<mn;
}