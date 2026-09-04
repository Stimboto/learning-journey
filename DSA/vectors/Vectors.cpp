#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> v; // Size is 0 -> Empty Vector (No size, no default value)
    // vector<int> v(5); // Size is 5, elements are value-initialized (0 for integers)
    // vector<int> v(5, 10); // Size is 5, all elements are 10
    // vector<int> v = {1, 2, 3}; // Size is 3, contains 1, 2, and 3

    
    // cpp ka dynamic array ko -> vector khte hh just like arraylist in java
    // unlimited size ka array (approx) -> as u addd elmnt the size keeps on increasing 
    // array which grows unlike regular array has fixed size ( no extra elmnt can be added )
    // vector<int> vect(5); //index 0 to 4
    
    vector<int> v(8,-1); // -1 became default value
    // int n = v.size(); // size of vector
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; // here also instead of garbage value default value is zero
    }

    v.push_back(5); //add an elemnet at end
    v.pop_back(); //remove last elemnt
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
    // vector is sort of array so same operations -> input, output, value change at any index
}