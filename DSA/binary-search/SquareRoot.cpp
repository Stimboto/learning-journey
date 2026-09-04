#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        //Method-0 -> restricted
        // return sqrt(x);


        //Method-1 -> runtime error integer overflow
        // for(int i=0;i<=x;i++){
        //     if(i*i==x) return i;
        //     if(i*i > x) return i-1;
        // }
        // return 0; //doen't matter


        //Method-2
        // long long n = x;
        // for(long long i=0;i<=n;i++){
        //     if(i*i== n) return i;
        //     if(i*i > n) return i-1;
        // }
        // return 0; //doen't matter


        //Method-3 -> also handle division by error(start i with 1)
        // for(int i=1;i<=x;i++){
        //     if(i== x/i) return i;
        //     if(i > x/i) return i-1;
        // }
        // return 0; //here it is crucialin case of x=0

        //Method-4 -> inetger overflow runtime error
        // int lo=0,hi=x;
        // while(lo<=hi){
        //     int mid = lo +(hi-lo)/2;
        //     if(mid*mid>x) hi=mid-1;
        //     else if(mid*mid<x) lo=mid+1;
        //     else return mid;
        // }
        // return hi;


        //Method-5
        // if(x==0) return 0; //base case
        // int lo=1,hi=x;
        // while(lo<=hi){
        //     int mid = lo +(hi-lo)/2;
        //     if(mid>x/mid) hi=mid-1;
        //     else if(mid<x/mid) lo=mid+1;
        //     else return mid;
        // }
        // return hi;

        
        //Method-6 -> O(logn)
        if(x<=1) return x; //base case
        int lo=2,hi=x;
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(mid>x/mid) hi=mid-1;
            else if(mid<x/mid) lo=mid+1;
            else return mid;
        }
        return hi;
    }
};

int main(){
    /*
     for integers -> 0 <= sqrt(x) <= x
     Method 0 to 3 -> TC = O(sqrt(n)) -> loop will run until sqrt(x) or sqrt(x)+1
     Method-4 -> use binary search -> we just need imaginary search space( BS on answer)
    */
}