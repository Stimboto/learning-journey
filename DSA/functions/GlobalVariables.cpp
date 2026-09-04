#include<iostream>
using namespace std;
int x = 7; // Global Variable
void fun(){
    x = 23;
}
int main(){
    // global avriable bn jaate hh 
    cout<<x<<endl;
    
    //the value will get changed only after func call
    fun();
    cout<<x<<endl;
}