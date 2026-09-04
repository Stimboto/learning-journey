#include<iostream>
using namespace std;
void change(int x){
    // this x is local to change()
    x = 20;
}

// always pass by value

int main(){
    int x = 10;
    // this x is local to main()
    change(x);
    cout<<x<<endl; //output: 10
}