#include<iostream>
using namespace std;

int main(){
    // take n odd 
    int n;
    cin>>n;

    //prints square
    //mid = (n+1)/2;
    int mid = n/2 +1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==mid || j==mid) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}