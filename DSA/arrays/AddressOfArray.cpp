#include<iostream>
using namespace std;

int main(){
    int arr[] = {-62,-35,-5,-1,-88,-34};
    int n = sizeof(arr)/4;
    
    cout<<arr<<endl; // same as &arr[0] represent the address of the whole array, just like a gate of society
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
}