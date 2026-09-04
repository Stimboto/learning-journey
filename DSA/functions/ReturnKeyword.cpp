#include<iostream>
using namespace std;
void fun(int n){
    cout<<n<<endl;
    //1. return terminates the function in case of void
    //2. return also returns the value to function
    //3. return can even terminate the loop(in case of nested only inside one gets done), while break cannot terminate function
    if(n>20) return;
    cout<<n*n<<endl;
}
int main(){
    fun(27);
}