#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //it will print like a A a A
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j%2 != 0)
            cout<<(char)(i+96)<<" ";
            else
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}