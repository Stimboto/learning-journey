#include<iostream>
using namespace std;
void fun(){
    // cout<<x; // error
}
int main(){
    int x = 10;
    // iski value toh pass kr skte hh but not variable itself
    fun();
}