#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
    vector<int> v = {4,3,8,2,9}; 

    sort(v.begin()+1,v.end()-1); // part of array get sorted keeping first and last as it is ( because of +1 and  -1)
    sort(v.begin(),v.end()); // 2 3 4 8 9 bydefault ascending order, TC= O(nlogn)

    reverse(v.begin(),v.end()); // elements gets in reverse order (not sort), TC= O(n)
    reverse(v.begin()+1,v.end()-1); //part of array get reversed

    for(int ele : v) cout<<ele<<" ";
}