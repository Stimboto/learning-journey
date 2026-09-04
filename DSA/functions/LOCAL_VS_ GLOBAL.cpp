#include<iostream>
using namespace std;
int x = 10; // Global Variable
void change(){
    x = 45; // global got changed
}
int main(){
    int x = 80;
    // local variable get preffred if exists
    cout<<x<<endl; //80
    change();
    cout<<x<<endl; //80
}