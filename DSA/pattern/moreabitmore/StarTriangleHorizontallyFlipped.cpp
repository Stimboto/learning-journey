#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     
  //METHOD 1
  // for(int i=n; i>=1; i--){
  //   for(int j=1; j<=i; j++){
  //       cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  //METHOD 2
  // for(int i=n; i>=1; i--){
  //   for(int j=i; j>=1; j--){
  //       cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // //METHOD 3
  // for(int i=1; i<=n; i++){
  //   for(int j=n; j>=i; j--){
  //       cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  //METHOD 4
  //use j<=n+1-i
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n+1-i; j++){
      cout<<"* ";
    }
    cout<<endl;
  }


  //METHOD 5
  // int a=n;
  // for(int i=1; i<=n;i++){
  //     for(int j=1; j<=a; j++){
  //       cout<<"* ";
  //     }
  //     a--;
  //     cout<<endl;
  // }
}