#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    /*
    selection -> unstable (min dhudh ke ek dm se swap krdo)
    bubble -> stable(adjacent gets swapped)
    why selection ? one advantage -> less swaps than bubble
    best one is bubble (in best case TC becomes O(n))
     ek number ki multiple occurences hho meanwhile doing the process
     if relative order of same elemnt gets changed that's unstable 
    */


    /*
    the built in sort method uses either merge or quick( it also optimizes further using some techniques)
    as it's TC = O(nlogn)
    */
}