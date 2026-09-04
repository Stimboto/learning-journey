#include <iostream>
using namespace std;
int main()
{
    float cp, sp;
    cout << "Enter cp and sp";
    cin >> cp;
    cout << endl;
    cin >> sp;

    if (sp > cp)
    {
        cout << "Profit made: " << sp - cp;
    }
    if (sp < cp)
    {
        cout << "loss made: " << cp - sp;
    }
    if (sp == cp)
    {
        cout << "No profit loss";
    }
    
}