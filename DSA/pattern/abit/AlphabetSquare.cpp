#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

//   for(int i=1; i<=n; i++){
//     for(int k=65; k<(65+n); k++){
//                 cout<< (char)k<<" "; 
//     }
//     cout<<endl;
//   }


  for(int i=1; i<=n; i++){
    //also we can start with char j= 'A'
    for(int j=1; j<=n; j++){
        cout<< (char)(j+64)<<" "; 
    }
    cout<<endl;
  }
    
}