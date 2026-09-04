#include<iostream>
using namespace std;
int product(int a, int b){
    int ans = a*b;
    return ans;
    // or return a*b;
}
int main(){
    //function ki khud ki ek value hoti hh
    int x = product(4,11);
    cout<<x;
    // or cout<<product(4,11);
}