#include <vector>
#include <array>
#include<iostream>

using namespace std;

int main() {
    int arr[4][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5},{3,4,6,7}};
    for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
            if(j%2==0) cout<<arr[3-i][j]<<" ";
            else cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}