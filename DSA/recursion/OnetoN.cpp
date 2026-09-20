#include<iostream>
using namespace std;

//call ke baad kaam
//in recursion we've two things -> before call and after call
//for loop is faster as in recursion it's 2 way thing
void print(int n){
    if(n==0) return; // base case
    print(n-1); // call
    cout<<n<<" "; // work
}
int main(){
    int n;
    cin>>n;
    print(n);
}