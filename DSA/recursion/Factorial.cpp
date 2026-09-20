#include<iostream>
using namespace std;

/*
Time  = O(n)
Space = O(n)
*/

int fact(int n){
    if(n==0 || n==1) return 1;
    return n * fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}