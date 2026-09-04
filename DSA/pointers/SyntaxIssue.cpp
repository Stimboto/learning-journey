#include<iostream>
using namespace std;
int main(){
    int x = 5, y = 2, z = 9;

    // int* p1, p2; never initialise just like variables in one line
    // or int *p1 =&x , *p2 = &y; confusing so avoid

    // this is best to initialoise in separate line
    int* p1 = &x;
    int* p2 = &y;
}