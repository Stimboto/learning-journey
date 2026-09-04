#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;

   for(int i=1; i<=n; i++){
    //keep it j<=i-1 or j<i
    for(int j=1; j<=i-1; j++){
        cout<<"  ";
    }

    for(int j=2*n-1; j>=2*i-1; j--){
        cout<<"* ";
    }
    cout<<endl;
   }


   //Method-2
//    int nsp = 0;
//    int nst = 2*n-1;
//    for(int i=1; i<=n; i++){
//     for(int j=1; j<= nsp; j++){
//         cout<<"  ";
//     }
//     for(int j=1; j<=nst; j++){
//         cout<<"* ";
//     }
//     nsp++;
//     nst -=2;
//     cout<<endl;
//    }
}