#include<iostream>
using namespace std;
int main(){
    int x = 6;
    {
        // local is separate variable within the block
        int x = 8;
    }
    cout<<x; //6
}