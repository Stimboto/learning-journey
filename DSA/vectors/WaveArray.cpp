#include<iostream>
#include <vector>
#include <array>
#include<algorithm>

using namespace std;

void sortInWave(vector<int>& v) {
        int n = v.size();
        //sort(v.begin(), v.end());
        // for(int i=0; i+1<n; i+=2){
        //     swap(v[i],v[i+1]);
        // }

        //Option-B
        for(int i=0; i<n; i+=2){
            // if(i==n-1) continue;
            if(i != n-1)
            swap(v[i],v[i+1]);
        }
        
}

int main() {
    // sorted array is given, just swap and i+=2
}