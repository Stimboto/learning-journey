#include <iostream>
using namespace std;
int main()
{

    int m,n;
    cout<<"Enter rows and colmns: ";
    cin>>m>>n;

    // lets say rows = 3 and col = 5
    // when m=n then start sqaure
    for(int i=1; i<=m; i++ ){
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // for(int i=1; i<=3; i++ ){
    //     cout<<"* * * * *";
    //     cout<<endl;
    // }

    // cout<<"* * * * *"<<endl;
    // cout<<"* * * * *"<<endl;
    // cout<<"* * * * *"<<endl;
    
}