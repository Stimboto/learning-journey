#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    int sum =0;
    //TC = O(n^2)
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            sum += stoi(s.substr(i,j)); //TC = O(n)
        }
    }
    cout<<sum<<endl;

    /*
    Method-1 -> generate all substrings and add them -> intotal TC = O(n) (i.e O(n^2): loop and O(n): substr)
    */
}