#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(7); // capacity = 7, size = 7 (it's not empty array it has 0 there at every place)
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(-6);  // capacity = 14, size = 8
    cout<<v.size()<<" "<<v.capacity()<<endl;
}