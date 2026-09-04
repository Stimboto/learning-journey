#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;

    // * is derefrence operator
    // *p khta hh p ke andr jo address hh uss jgah ki value
    *ptr += 8; // x += 8
    cout<<x<<endl;

}