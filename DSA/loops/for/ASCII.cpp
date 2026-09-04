#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    int ascii = ( int )ch;

    //print all characters
   for(int i=65; i<=90; i++){
    cout<< (char) i<<" ";
   }

   cout<<endl;
   //print ASCII with their alphabets
   for(int i=1; i<=26; i++){
    cout<<ch<<" "<<ascii<<endl;
    ch++;
    ascii++;
   }

   cout<<endl;

   //print all characters
   for(int i=97; i<=122; i++){
    cout<< (char) i<<" ";
   }
   cout<<endl;

   char chh ='a';
   int asciii = (int) chh;
   for(int i=1; i<=26; i++){
    cout<<chh<<" "<<asciii<<endl;
    chh++;
    asciii++;
   }

}