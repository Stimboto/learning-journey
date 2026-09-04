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
    vector<int> arr = {9,-2,0,0,-4,6,0,7,0};
    int n = arr.size();
    vector<int> v;
    int count = 0;

    print(arr);

    // Count zeroes
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0)
            count++;
    }

    //Method-1 -> Bubble method
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
            
            // if(arr[j]==0 && arr[j+1]==0){
            //     swap(arr[j],arr[j+2]);
            // }
            // else if(arr[j]==0 && arr[j+1]!=0){
            //     swap(arr[j],arr[j+1]);
            // }
        }
        
    }
    print(arr);
    cout << "Number of zeroes: " << count;

    //Method-2 -> non-bubble method
    // int count =0;
    // for(int i=0;i<n-1;i++){
    //         if(arr[i]!=0){
    //            v.push_back(arr[i]);
    //         }
    //         else{
    //             count++;
    //         }
    // }
    // for(int i=0;i<count;i++){
    //     v.push_back(0);
    // }
    // print(v);

    /*
     an array with some numbers and zeros, move all zeros to the end while 
     maintaing the relative order
    */
    
}