#include<iostream>
#include<vector>
using namespace std;
int main(){
    // each time it gets double the size if existing capacity cannot hold the upcoming ones i.e size = capacity ( all elmnts of old get copied into new one)
    // this is how it achieves unlimited size, once new array forms the older one get vanish from memory
    // when we pop_back the capacity never decreases
    // it seems the memory wastage is happening but TC ans SC wise it's not 
    // TC in adding n elemnts in vector = O(n) ( in case if we would be using one incrmnt tehn TC will be O(n^2))
    // we can increase capacity by any factor of k(1.5x,2x,3x) to keep TC O(n)
    
    vector<int> v;
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;

    // vector<int> v;
    // v.push_back(5);
    // v.push_back(9);
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(8);
    // v.push_back(4);
    // v.push_back(6);
    // v.push_back(1);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
}