#include<iostream>
#include<vector>
using namespace std;

/*
loop is efficient than recursion for traversing an array but this has 
unique usecase
Time  → O(n)
Space → O(n)
*/
void printRec(vector<int>& arr, int idx){
    if(idx == arr.size()) return;
    cout<<arr[idx]<<" "; //work
    printRec(arr,idx+1); //call
}
int main(){
    vector<int> arr = {5,8,2,534,8,235,-8521};
    printRec(arr,0);
}