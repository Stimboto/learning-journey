#include<iostream>
#include<climits>
using namespace std;
int main(){
    //another way to form array
    //dynamic allocation 
    //int* brr = new int[7]; 

    int* brr;
    brr = new int[7];
    
    brr[0] = 4;
    brr[1]= 3;
    for(int i=0;i<7;i++){
        cout<<brr[i]<<" ";
    }
    //by default it shows 0 for empty elements of array instead of garbage value
}