#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n; 

    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    // prints 1 1 1 1 
    //   for(int i=1; i<=n; i++){
    //     for(int j=1; j<=4; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    //   }
}
