#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count =1;
    for(int i=1; i<=n; i++){
       for(int j=1; j<=i; j++){

        // in place next 2 lines write count++ at once
        cout<<count<<" ";
        count++;
       }
       cout<<endl;
    }
}