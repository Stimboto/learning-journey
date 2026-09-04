#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;


    // address for separate variable will be different
    // we can store the address of a variable inside differet pointers
}