#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string biggerNumber(string s1,string s2){
    /*
    0. for comparison remove leading zeroes
    1. compare length (if lenght bigth then number is greater)
    2. when length is same -> compare directly (usual way)
    */
   int i=0;
   while(s1[i]=='0') i++;
   int s1_Real_Length = s1.length() - i;

   int j=0;
   while(s2[j]=='0') j++;
   int s2_Real_Length = s2.length() - j;

    //agar aage return horha hh toh multiple if bnaa skte hh
    if(s1_Real_Length > s2_Real_Length) return s1;
    if(s2_Real_Length > s1_Real_Length) return s2;

    while(i<s1.length() && j<s2.length() && s1[i] == s2[j]){
        i++;
        j++;
    }
    if(i==s1.length()) return s1; //s1 and s2 are same numbers
    if(s1[i] > s2[j]) return s1;
    else return s2;
}

int main(){
    vector<string> arr = {"0123","0023","456","00182","940","2901"};
    string max = arr[0];
    int m = arr.size();

    // using stoi() or stoll() -> TC = O(mn)
    // for(int i=1;i<m;i++){
    //     if(stoll(arr[i])> stoll(max)) max = arr[i];
    // }
    // cout<<max<<endl;
    

    //without using stoi()
    for(int i=1;i<m;i++){
        max = biggerNumber(arr[i],max);
    }
    cout<<max<<endl;
    
    
}