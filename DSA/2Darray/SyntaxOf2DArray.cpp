#include <vector>
#include <array>
#include<iostream>

using namespace std;

int main() {
    /*
    0. Array of arrays ( array of 1D array i.e individual elemnt itself is an array)
    1. just like matrix [rows x cols] i.e grid view
    2. elmnt represented via arr[row][col]
    3. index of rows and cols starts from 0 
    4. Eg. arr = {{1,2,3,4},{3,4,5,6},{5,6,7.8}}
                      0         1         2

    5. for traversing all elemnts TC = O(mn)                  
    */


    // int arr[3][4];
    // for(int i=0;i<3;i++){
    //     for(int j=0; j<4;j++){
    //         cin>>arr[i][j];
    //     } 
    // }
    


    //it's mandatory to fill cols 
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    for(int i=0;i<3;i++){
        for(int j=0; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
      cout<<endl;  
    }


}    