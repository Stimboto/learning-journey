#include<iostream>
using namespace std;
// void fun(int age = 20){
//     cout<<"My age is "<<age<<endl;
// }


 void power(int base, int exponent=2){
    int ans =1;
    for(int i=0; i< exponent; i++){
        ans *= base;
    }
    cout<< ans << endl;
 }

int main(){

    power(5);
    power(5,3);

    // even if we don't pass any argument here the default will get passed
    // fun();
}