#include <vector>
#include <array>
#include<iostream>
using namespace std;

void print(vector<int>& arr){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> arr = {2,1,4,3,5};
    int n = arr.size();
    print(arr);

    for(int i=0;i<n-1;i++){
        int swaps=0;
        for(int j=n-1;j>i;j--){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
        if(swaps==0) break;
        
    }
    print(arr);
    /*
    in ascending order,
     the smallest elemnet comes at right place after each pass
    */
}