#include<iostream>
using namespace std;

/*
& = "Don't give me a copy; let me work with the original."
And then:
const & = "Don't give me a copy, but don't let me change it."
*/

void swap(int& a, int& b){ // alias
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 5, b = 2;

    //swap(a,b); //built in function only in c++

    swap(a,b);
    cout<<a<<" "<<b<<endl;
}