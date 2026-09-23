#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float average;
    Cricketer(string name, int runs, float average){
        (*this).name = name; //hmmm hmmm this is a pointer containing object's address
        this->runs = runs;
        this->average = average;
    }
    void print(){
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;
    }
};
int main(){
    Cricketer c1("Virat Kohli",14000,58.1);
    Cricketer c2("Sachin Tendulkar Sir",18000,46.7);
    Cricketer c3("Rohit Sharma",11000,49.4);

    //ye object pointer hh jisme esse object ka address hh jisme ye details hh
    //leking iss object ka koi naam nhi hh
    Cricketer* p = new Cricketer("ABD",10000,55.2); // Object Pointer
    p->print();
    
    /*
    object ke liye point
    object agr pointer hh toh arrow
    */

    Cricketer* ptr = &c1; // Object Pointer (must have same usertype mtlab Cricketer ke object ko Cricketer pointer mein hi store krenge just like variables int into int)
    ptr->average = 74.2; // (*ptr).average = 74.2;
    cout<<c1.average<<endl;
    cout<<ptr->name<<endl;
    cout<<ptr->runs<<endl;
    
    // int x = 10;
    // int* ptr = &x;
    // *ptr = 20; 
    // cout<<x<<endl;

    int x = 10;
    int* y = new int(10); //ek variable jiski value 10 hh naam nhi pta uska address y mein hh 

    int brr[7];
    int* arr = new int[7];
}