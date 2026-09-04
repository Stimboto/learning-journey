#include <vector>
#include <array>
#include<iostream>
#include<climits>

using namespace std;

int main() {
    int ans[3]; // equal to row number
    int k=0;

    int arr[3][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    for(int i=0; i<3;i++){
        int sum =0;
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
        ans[k] = sum;
        k++;  
    }

    int mx_row; //also int mx_row = -1;
    int mx_sum = INT_MIN;
    
    for(int i=0;i<3;i++){
        mx_sum = max(mx_sum,ans[i]); 
    }    
    cout<<mx_sum<<" ";

    for(int i=0;i<3;i++){
        if(mx_sum==ans[i]) {
        cout<<i<<" -index ";
        cout<<i+1<<" -row ";
        break; 
        }
    } 




    //Method-2
    // int arr[][4] = {{5,18,11,2},{9,9,4,4},{7,10,13,15}};
    // int maxRow = -1, maxSum = INT_MIN;
    // for(int i=0;i<3;i++){
    //     int sum = 0;
    //     for(int j=0;j<4;j++){
    //         sum += arr[i][j];
    //     }
    //     if(sum > maxSum){
    //         maxSum = sum;
    //         maxRow = i;
    //     } 
    // }
    // cout<<maxRow<<" "<<maxSum;
}    