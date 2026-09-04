#include<iostream>
using namespace std;
int main(){
    // TC = O(n)
    // also known as linear search
    int arr[] = {62,5,5,-1,88,-34,5};
    int n = sizeof(arr)/4;
    
    int target = -34;
    bool flag = false; // false means not present
    int ind;

    for(int i=0; i<n; i++){
        if(target==arr[i]){
            flag=true; // true means present
            ind = i;
            break;
        }
    }
    if(flag == true) cout<<"Element Found at: "<<ind<<endl;
    else cout<<"Element Not Found"<<endl;
}