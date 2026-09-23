#include<iostream>
using namespace std;
class Pokemon{
public:
    string name;
    string type;
    int hp;
    // To avoid confusion we use this
    Pokemon(string name, string type, int hp){
        this->name = name; // object ka name = name passed
        this->type = type;
        this->hp = hp;
    }
    void print(){
        cout<<name<<" "<<type<<" "<<hp<<endl;
    }
};
int main(){
    Pokemon p3("Mewtwo","Psychic",200);
    p3.print();

    Pokemon p1("Pikachu","Electric",70);
    Pokemon p2("Charizard","Fire",120);
}