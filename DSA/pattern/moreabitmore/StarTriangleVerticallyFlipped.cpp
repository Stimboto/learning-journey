#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

// METHOD-1
//    for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//         if((i+j)>n) cout<<"* ";
//         else cout<<"  ";
//     }
//     cout<<endl;
//    }


// METHOD-2
    for(int i=1; i<=n; i++){
        //n+1-i ki jagah n-i ( from every line one extra space gone)
        for(int j=1; j<=n-i; j++){
           cout<<"  "; 
        }
        for(int j=1; j<=i; j++){
           cout<<"* "; 
        }
        cout<<endl;
    }
}