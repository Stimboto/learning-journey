#include<iostream>
using namespace std;

/*
0. What would make my current problem smaller but still the same problem?
1. Can I express this using smaller versions of the SAME problem?
2. The recursive call is your engine.
3. The base case is your brake.
4. I am responsible for ONE step. I trust the recursive function to handle the remaining smaller problem.
    BIG PROBLEM
        ↓
    smaller
        ↓
    smaller
        ↓
    smaller
        ↓
    BASE CASE

① What is my current problem?
What exactly does f(n) mean?

② What is the smaller SAME problem?
f(n-1)?
f(idx+1)?
f(m-1,n)?
f(n/2)?

③ If I trust that smaller answer, what ONE thing do I need to do?
That's your current work.

④ When does the problem become so small that I already know the answer?
That's your base case.
*/


void print(int n){
    if(n==0) return; // base case -> to stop recursion or go in some dirtn
    cout<<n<<" "; // work 
    print(n-1); // call
}
int main(){
    int n;
    cin>>n;
    //faith
    print(n);
}