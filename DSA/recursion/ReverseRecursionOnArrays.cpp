#include<iostream>
#include<vector>
using namespace std;

/*
//Method-1 -> swap work and call
void printRec(vector<int>& arr, int idx){
    if(idx == arr.size()) return;
    printRec(arr,idx+1); //call
    cout<<arr[idx]<<" "; //work
}
*/

//Method-2
void printRec(vector<int>& arr, int idx){
    if(idx == arr.size()) return;
    cout<<arr[idx]<<" "; //work
    printRec(arr,idx-1); //call
}



int main(){
    vector<int> arr = {5,8,2,534,8,235,-8521};
    printRec(arr,arr.size()-1);
}