#include <vector>
#include <array>
#include<iostream>

using namespace std;

// vector<int> Merge2SortedArray(vector<int>& v1, vector<int>& v2){
//     int n1 = v1.size(); int n2 = v2.size();        
//     vector<int> ans(n1+n2);

//     int i =0,j=0,k=0;
//     while (i<n1 && j<n2)
//     {
//          if(v1[i]<v2[j]){
//             ans[k++] = v1[i++];
//             // ans[k] = v1[i];
//             // i++;
//             // k++;
//          }
//          else { //v2[j]<v1[i]
//             ans[k++] = v2[j++];
//             // ans[k] = v2[j];
//             // j++;
//             // k++;
//          }

//          // k++;
//     }

//     // remaining elmnts 
//     //Option-A
//     while(j<n2){
//             ans[k++] == v2[j++];
//     }
//     while(i<n1){
//             ans[k++] == v1[i++];
//     }

//     //Option-B
//     // if(i==n1){
//     //     while(j<n2){
//     //         ans[k++] == v2[j++];
//     //     }
//     // }
//     // else{
//     //     while(i<n1){
//     //         ans[k++] == v1[i++];
//     //     }
//     // }

//     return ans;
    
// }


vector<int> Merge2SortedArray(vector<int>& v1, vector<int>& v2){
    int m = v1.size();
    int n = v2.size();
    vector<int> ans(m+n);

    int i=m-1,j=n-1,k=(m+n)-1;
    while(i>=0 && j>=0){
        if(v1[i]>v2[j]) ans[k--] = v1[i--];
        else ans[k--] = v2[j--];
    }
    while(i>=0) ans[k--] = v1[i--]; //optional
    while(j>=0) ans[k--] = v2[j--];

    return ans;
}
/*
 1. if a statement (e.g. k++;) coming in again and again(redundant), then write it outside
 2. also keep in mind the use of post-incr/decr
*/

int main() {
     //Method-1 -> just put both array in new one (copy paste) and then sort function -> but TC = (m+n)log(m+n) is high 
     //Method-2 -> we wnat to get it done with TC = O(m+n) -> using three pointers method (i,j,k at begining)
     //Method-3 -> we wnat to get it done with TC = O(m+n) -> using three pointers method (i,j,k at end)

    // int a[] = {10,20,40,70,90,100};
    // int b[] = {30,50,60,80};
    // int m = sizeof(a)/4, n = sizeof(b)/4;
    // int c[m+n];
    // int i = 0, j = 0, k = 0;
    // while(i<m && j<n){
    //     if(a[i] < b[j])
    //         c[k++] = a[i++];
    //     else // b[j] < a[i]
    //         c[k++] = b[j++];
    // }
    // while(j<n)
    //     c[k++] = b[j++];
    // while(i<m)
    //     c[k++] = a[i++];
    // for(int i=0;i<m+n;i++){
    //     cout<<c[i]<<" ";
    // }

    vector<int> v1 = {10,20,40,70,90,100};
    vector<int> v2 = {30,50,60,80};
    vector<int> v3 = Merge2SortedArray(v1,v2);
    for(int ele : v3) cout<<ele<<" ";
}