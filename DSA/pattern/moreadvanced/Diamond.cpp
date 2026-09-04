#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

//     int c = n;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     for(int i=1; i<=c-1; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"  ";
//         }
//         for(int j=c+1; j>=2*i-1; j--){
//             cout<<"* ";
//         }
//        cout<<endl;
//    }


        //Method 2
        //Upper pyramid
        // int nsp = n-1;
        // int nst = 1;
        // for(int i=1; i<=n; i++){
        //         for(int j=1; j<=nsp; j++){
        //             cout<<"  ";
        //         }
        //         for(int j=1; j<=nst;j++){
        //             cout<<"* ";
        //         }
        //         nsp--;
        //         nst +=2;
        //         cout<<endl;
        // }

        //lower pyramid
        // nsp = 1;
        // nst = 2*n-3;
        //     for(int i=1; i<=n-1; i++){
        //             for(int j=1; j<=nsp; j++){
        //                 cout<<"  ";
        //             }
        //             for(int j=1; j<=nst;j++){
        //                 cout<<"* ";
        //             }
        //             nsp++;
        //             nst -=2;
        //             cout<<endl;
        //     }


        //Method -3 
        int nsp = n-1;
        int nst =1;
        for(int i=1; i<=2*n-1; i++){
                for(int j=1; j<=nsp; j++){
                    cout<<"  ";
                }
                for(int j=1; j<=nst;j++){
                    cout<<"* ";
                }
                if(i<n) {
                    nsp--;
                    nst +=2;
                }
                else {
                    nsp++;
                    nst -=2;
                }
                cout<<endl;
        }
}