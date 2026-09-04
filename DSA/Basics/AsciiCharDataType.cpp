#include <iostream>
using namespace std;

int main()
{
    // a b c d ... z
    // A B C D ... Z
    //! @ # $ | % ^ & * ( ) _ + = ?
    // 0 1 2 3 4 5 6 7 8 9
    // char x;
    // cin >> x;
    // int ascii = (int)x; //explicit typecasting
    // cout << ascii;
    // char x;
    // cin >> x;
    // int ascii = x; // implicit typecasting
    // cout << ascii;

    // int x = 74;
    // cout << (char)x;
    char ch1 = 'A';
    char ch2 = 'a';
    // char operation(+,-,*,/) char -> int
    // infact ascii value get stored in the memory for each character
    cout << ch1 + ch2 << endl;
    cout << 'a' + 97 << endl;
    cout << (char)('a' + 1);
}