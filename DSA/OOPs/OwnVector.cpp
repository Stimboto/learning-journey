#include<iostream>
using namespace std;
class Avector{
private:
    int cap;
    int* arr;
    int length; //current number of elmnts and also takes care of the current index which needs to be filled 
public:
    Avector(int capacity, int default_value){
        cap = capacity; 
        length = capacity;
        arr = new int[capacity];
        for(int i=0;i<capacity;i++){
            arr[i] = default_value;
        }
    }   
    int size(){
        return length;
    }
    int capacity(){
        return cap;
    }
    void pop_back(){
        if(length == 0){
            cout<<"Vector is Empty!"<<endl;
            return;
        }
        length--;
    }
    void push_back(int val){
        if(length == cap){
            cap = 2*cap;
            int* temp = new int[cap];
            for(int i=0;i<length;i++){
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;

        }
        arr[length++] = val;
    }
    int get(int indx){
        if(indx <0 || indx >=length){
            cout<<"Index out of bound"<<endl;
            return;
        }
        return arr[indx];
    }
    void set(int indx, int val){
        if(indx <0 || indx >=length){
            cout<<"Index out of bound"<<endl;
            return;
        }
        arr[indx] = val;
    }
};