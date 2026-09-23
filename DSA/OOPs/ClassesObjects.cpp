#include<iostream>
using namespace std;

// Class = what an object should look like.
// Object = actual thing created from it.
// class name start with capital letter
// user defined Data type
class Student{ 
public:
    //attributes
    string name;
    int rno;
    float cgpa;

    /*
    constructor used for quick initialization
    or to give value in attributes
    */

    //default constructor
   // Constructor Overloading
    Student(string n, float c, int r){ // Parameterised Constructor
        rno = r;
        name = n;
        cgpa = c;
    }
    Student(int r, float c, string n){ // Parameterised Constructor
        rno = r;
        name = n;
        cgpa = c;
    }
    Student(string n, int r){ // Parameterised Constructor
        rno = r;
        name = n;
    }
    Student(){ // Default Constructor
    }
};

int main(){
    Student x("Sumit",8.7,39); 
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;

    Student v(1049,9.75,"Manish"); 

    Student z("Ikram",42); 

    Student alpha;

    Student y; 
    // y is an object
    // we use dot(.) -> for assigning value or output
    y.name = "Stim";
    y.rno = 76;
    y.cgpa = 8.7;

    cout<<y.cgpa<<endl;
    cout<<y.name<<endl;
    cout<<y.rno<<endl;

    /*
    objects -> real life entity(bugati,horse,aadi)
    class -> blueprint (car,animal,man)
    */
}