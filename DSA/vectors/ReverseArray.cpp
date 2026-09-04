#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
    for(int ele : arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
   
    vector<int> arr = {10,20,30,40,50,60};
    print(arr);

    //Method -1
    //two variable approach or two pointers method( no pionters has been used)

    //for(int i = 0, j = arr.size() - 1;i<j; i++,j--)
    //reverse some part of array -> int i = 1, j = 3;
     
    int n =arr.size();
    int i = 0, j = n - 1;
    while(i<j){
        // int temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] =temp;
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    print(arr);
 

    //method -2
    /*
     for(int i=0; i<n/2; i++){ 
        swap(arr[i],arr[n-1-i]);
     }
     print(arr);
    */
}