#include<iostream>
#include<climits>
using namespace std;

void change(int y[]){ 
    // doesn't matter even if we pass int x[]
    // ussi array ki baat ho rhi hh, koi nya bna hi nhi
    // ab hm doo namo se control kr rhe hh
    y[0] = 20;
}
int main(){
    // here x can be considered a pointer storing &x[0]
    // x stores the address of x[0]
    int x[]={6,1,2}; 
    change(x); 
    // addres of array got sent as &x[0]
    // it is passed by reference
    cout<<x[0]<<endl;

    // while passing variable in function a new copy or pass by value would happen but here no new array is created 
    // since pointers is not in java, so to change the value we pass it as single size array in function then it will work smoothly
    // when we send variable(pass by value happens), while when we send array (pass by reference happens)
    
}