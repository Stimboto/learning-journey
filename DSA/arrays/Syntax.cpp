#include <iostream>
using namespace std;

int main(){

    //declatration and initialisation both
    int marks[] = {54,76,75,43,99,35};
    // int marks[5] = {54,76,75,43,99,35}; //even this correct

    // cout<<size(marks)<<endl; giving error
    // size means length or number of elemnets in array

    // in array elements get stored in linear format index wise, and index starts from 0
    // starts from 0 because the index represents the offset(distance) from the beginning of the array
    
    //sizeof() gives total bytes of that variable based on its data type
    cout<<sizeof(marks)<<endl;

    //to find the number of elemnts for int type array
    //not the best solution -> vectors is best
    cout<<sizeof(marks)/4<<endl;
    cout<<sizeof(marks)/sizeof(int)<<endl;;

    // cout<<marks<<endl; //address printed
    // cout<<marks[2]<<endl;
    // marks[2] = 23; //updated the value
    // cout<<marks[2]<<endl; // TC = O(1) it directly fetch it form the given index ( as array elemnts are stored in continuous form)

    // cin>>marks[2]; //input
    // cout<<marks[2]<<endl;

    int a[25]; //declaration: empty array of size 25
    int size =10, b[size]; //array of size 10
    int arr(10); // direct initialization of variable, identical to writing int arr = 10;

}