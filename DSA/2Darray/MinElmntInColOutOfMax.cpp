#include <vector>
#include <array>
#include<iostream>
#include<climits>

using namespace std;

int main() {
    int ans[4]; //similar to cols
    int k=0;
    int arr[3][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    for(int j=0; j<4;j++){
        int maxel = INT_MIN;
        for(int i=0;i<3;i++){
             maxel = max(maxel,arr[i][j]);
        }
        ans[k] = maxel;
        k++;
    }
    int minel = INT_MAX;
    for(int i=0;i<4;i++){
        cout<<ans[i]<<" ";
        minel=min(minel,ans[i]);
    }

    cout<<endl;
    cout<<minel;
}    