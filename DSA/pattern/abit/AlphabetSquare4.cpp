#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // for(int i=1; i<=n; i++){
    //     if(i%2 != 0){
    //         for(int j=1; j<=n; j++){
    //             cout<<(char)(i+96)<<" ";
    //         }
    //     }
    //     else{
    //         for(int j=1; j<=n; j++){
    //             cout<<(char)(i+64)<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }



    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i%2 != 0)
            cout<<(char)(i+96)<<" ";
            else
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
    
}