#include<iostream>
using namespace std;

/*
Recursive Fibonaccib -> recursive tree (Binary tree)
Time  → O(2^n) 
Space → O(n)
*/

/*
Basic recursion -> worst TC -> we'll make it better later
O(2^n)
    ↓
Memoization / DP
O(n)
    ↓
Iterative Fibonacci
O(n) time, O(1) space
*/

// 0 1 1 2 3 5 8 13 ...
class Solution {
public:
    int fib(int n) {
        // return (n<=1)? n : fib(n-1) + fib(n-2);
        if(n<=1) return n;
        return fib(n-1) + fib(n-2);
    }
};