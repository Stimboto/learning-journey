#include<iostream>
#include<vector>
using namespace std;
// void change(vector<int> v){ // vectors are pass by value while array're pass by refrence
//     v[2] = 99;
// }
void change(vector<int>& v){ // pass by reference using alias (in cpp only not in java)
    v[2] = 99;
}
int main(){
    vector<int> v = {4,3,8,2,9,7}; 
    change(v);
    cout<<v[2]<<endl;
}