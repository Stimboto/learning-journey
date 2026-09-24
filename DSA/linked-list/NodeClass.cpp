#include<iostream>
using namespace std;

/*
0. address of all boxes are different -> now we've to link them together -> as data stucture needs to be arranged in a particular fashion
1. each box has address of next one and its value -> last box has NULL address
2. first box known as head (owner) -> with this we can reach to any box
*/

class Node{ // User Defined Data Type
public:
    int val;
    Node* next; //pointer of what type?? Node type -> jisme Node ka address bhara jayega
    Node(int val){
        this->val = val;
    }
};

int main(){
    Node a(7); // head
    Node b(0);
    Node c(1);
    Node d(8);
    Node e(2);

    // attaching nodes
    a.next = &b; // a.next is a object pointer
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;

    cout<<(*(a.next)).val<<endl;
    cout<<(c.next)->val<<endl;
}