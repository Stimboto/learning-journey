#include<iostream>
using namespace std;
int x = 8;
int main(){
    int x = 56;
    cout<<x<<endl;

    // now to access the global one becsuse of kalesh( local of same name as global)
    cout<<::x<<endl; // scope resolution operator
}