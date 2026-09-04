#include <iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter rows and colmns: ";
    cin>>n;

    for(int i=1; i<=n; i++ ){
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // for(int i=n; i>=1; i-- ){
    //     for(int j=n; j>=1; j--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    
}