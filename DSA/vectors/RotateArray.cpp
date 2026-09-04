#include<iostream>
#include<vector>
using namespace std;

//TC = O(n) for reversing array
void reverse(vector<int>& v, int i, int j){
        /*
        Not required as i, j has been taken as input
        int i = 0; 
        int j = v.size()-1;
        */ 
        while(i<j){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }

//TC = O(n) for rotating array i.e time = 2n
void rotate(vector<int>& v, int k){
        int n = v.size();
        k= k%n; // k = nq + r (only r times needed)
        reverse(v,0,n-1);
        reverse(v,0,k-1);
        reverse(v,k,n-1);
    }

int main(){
    // k elemnts from back come in front
    // Brute force -> make another array of same size (or make a empty vector and then push_back()) and store the last k elemnts(n-k to n-1 index) first then store rest n-k elmnts(0 to n-k-1 index)
    // but to avoid extra space or array or vector we'll've to do it in this array only

    // Method-1 -> rev(0 to n-1) -> rev(0 to k-1)-> rev(k to n-1)
    // Method-2 -> rev(0 to n-k-1) -> rev(n-k to n-1)-> rev(0 to n-1)
}