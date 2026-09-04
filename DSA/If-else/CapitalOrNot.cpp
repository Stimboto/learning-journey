#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;

    int ascii = (int) ch;

    //in cpp we can also compare character and number 
    //actaully their ascii gets compared
    //if (ch>=65 && ch<=90)
    if (ascii>=65 && ascii<=90) {
        cout<<"Capital";
    }
    else{
        cout<<"Not";
    }
}