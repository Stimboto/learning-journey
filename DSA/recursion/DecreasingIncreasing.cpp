#include <iostream>
using namespace std;

/*
TC = total number of calls 
Space = depth of call stack

Time  = O(b)
Space = O(b)   // recursion stack
*/


/*
// 1 printed twice
void print(int n) {
    if(n == 0) return;
    cout << n << " ";
    print(n - 1);
    cout << n << " ";
}
*/

//1 printed once
void print(int n) {
    if(n == 0) return;
    cout << n << " ";
    print(n - 1);
    if(n != 1) cout << n << " ";
}

int main() {
    print(5);
}