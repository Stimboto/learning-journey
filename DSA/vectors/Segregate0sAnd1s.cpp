#include<iostream>
#include <vector>
#include <array>

using namespace std;

//Method-1
void segregate0and1(vector<int>& v) {
    int i=0;
    int j= v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        else if(v[j]==1) j--;
        else if(v[i]==1 && v[j]==0) {
            swap(v[i],v[j]);
            i++;
            j--;
        }

        // if(v[i]==0) i++;
        // if(v[j]==1) j--;
        // if(i>j) break;
        // if(v[i]==1 && v[j]==0) {
        //     swap(v[i],v[j]);
        //     i++;
        //     j--;
        // }
    }
}

//Method-2
// void segregate0and1(vector<int>& v) {
//     int zeros = 0, ones = 0;

//     for(int i=0; i<v.size(); i++){
//         if(v[i]==0) zeros++;
//         else ones++;
//     }

       //option-A
//     // for(int i=0; i<zeros; i++){
//     //     v[i] = 0;
//     // }
//     // for(int i=zeros; i<v.size(); i++){
//     //     v[i] = 1;
//     // }

       //option-A
//     for(int i=0; i<v.size();i++){
//         if(i<zeros) v[i]=0;
//         else v[i]=1;
//     }
        
// }

int main() {
        //Known as binary array
        //Method-0 -> sort(v.begin(),v.end()); //TC = O(nlogn)
        //Method-1 -> make two variables( zeros and ones), iterate over the array and count 0s and 1s, iterate again and fill the zeroes upfront same as of count and later fill 1s //TC = O(n) via 2 pass(2n loop iteration)
        //Method-2 -> use of two pointer technique i.e i se pehle 0s and j ke baad 1s, i aur j ko chipkado (just swap if i=1 && j=0),here TC = O(n) via 1 pass ( 1 loop iteration)

}