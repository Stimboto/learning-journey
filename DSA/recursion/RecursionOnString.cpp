#include <iostream>
#include <string>
using namespace std;

/*
Time  → O(n)
Space → O(n)
*/

void printRec(string& s, int idx){
    if(idx == s.length()) return;
    cout << s[idx] << " ";
    printRec(s, idx + 1);
}

int main(){
    string s = "hello";
    printRec(s, 0);
}