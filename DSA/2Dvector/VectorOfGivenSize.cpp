#include<iostream>
#include<vector>
using namespace std;


int main(){
    int m,n;
    cin>>m;
    cin>>n;

    // vector<int> v(m,0);
    vector<vector<int>> v(m,vector<int>(n,0)); //each row has a vector default value 0

    v.push_back(vector<int>(4,-1));

    //output
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}