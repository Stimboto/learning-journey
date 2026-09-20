#include<iostream>
using namespace std;

//controlled recursion
void deeksha(int n){
    if(n==0) return; //termination condn
    cout<<"Deeksha"<<endl;
    deeksha(n-1); //func calling
}
int main(){
    deeksha(3);
}