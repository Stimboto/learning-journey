#include <vector>
#include <array>
#include<iostream>
#include<climits>

using namespace std;

int main() {
     int mx = INT_MIN;  
    int arr[][4] = {{5,8,1,2},{9,9,4,40},{7,0,3,5}};
    for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            mx = max(mx,arr[i][j]);
        }
    }
    cout<<mx;
}    