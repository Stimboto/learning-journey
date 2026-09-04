#include <iostream>
using namespace std;
int main()
{
 int a,b;
 cin>>a>>b;

int ans =1;
if(a==0 && b==0) cout<<"Indeterminate form";
else if ( a==0) ans =0;
else cout<<ans;

for (int i = 1; i<=b; i++){
     ans *= a;
     if(a==1) break;
}
}