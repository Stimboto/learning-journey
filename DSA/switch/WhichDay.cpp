#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    //alternate to if-else but stupid
    // if(n == 1) cout<<"Mon";
    // else if(n==2) cout<<"Tue";
    // else if(n==3) cout<<"Wed";
    // else if(n==4) cout<<"Thur";
    // else if(n==5) cout<<"Fri";
    // else if(n==6) cout<<"Sar";
    // else if(n==7) cout<<"Sun";
    // else  cout<<"Invalid day";

    // we can write characters also inplace of number
    switch(n){
        case 1 :
            cout<<"Mon";
            break;
        case 2 :
            cout<<"Tue";
            break;
        case 3 :
            cout<<"Wed";
            break;
        case 4 :
            cout<<"Thur";
            break;
        case 5 :
            cout<<"Fri";
            break;
        case 6 :
            cout<<"Sat";
            break;
        case 7 :
            cout<<"Sun";
            break; 
        default:
            cout<<"Invalid day";                       
        
    }

    
}