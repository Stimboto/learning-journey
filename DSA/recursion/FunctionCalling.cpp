#include<iostream>
using namespace std;

void aryan(){
    cout<<"Aryan"<<endl;
}
void param(){
    aryan();
    cout<<"Param"<<endl;
    aryan();
}
void kartik(){
    aryan();
    cout<<"Kartik"<<endl;
    param();
}
int main(){
    kartik();
    param();
    aryan();
} 
// a k a p a a p a a
//to finish function ya toh return ya line khtm ho jaye
//function over hone ke baad wha jata hh jisne call lgai (call back krta hh)
//jisko call kre vo func upr hona chahiye