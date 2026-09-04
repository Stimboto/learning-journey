#include <vector>
#include <array>
#include<iostream>
using namespace std;

void print(vector<int>& arr){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> arr = {5,4,3,6,2,1};
    int n = arr.size();

    print(arr);

    //bubble sort
    for(int i=0;i<n-1;i++){ //n-1
            int swaps=0;
            for(int j=0;j<n-1-i;j++){ //till n-2 while comparing i, i+1 elemnt
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swaps++;
                }   
            }
            if(swaps==0) break;
    }
    print(arr);
    
    /*
    1. by comparing adjacent elemnts at point of time -> swap if greater than next
    2. in every pass -> largest reach at its place
    3. total n-1 passes
    4. best: TC = O(n) -> we used int swaps=0;
       Avg: TC = O(n^2)
       Worst: TC = O(n^2)
       AS = O(1)
    5. max swaps possible = n(n-1)/2
    */
}