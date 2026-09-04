#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    /*

    1. n is prime if only 1 & n are factors
    2. prime numbers --> no factor between the 2  and n-1
    3. loop from i to n-1 as 1 and n would obviously be the factors
    4. if(n%i==0) (if inbetween 2 and n-1 any factor is there then that's a composite number)
    4. 1 is niether prime or composite
    5. Checking up to the square root of n is preferred in prime checking code because divisors come in pairs. If n = a *b, both factors cannot be larger than sqrt{n}. Therefore, if a number has any divisors, at least one will always be less than or equal to sqrt{n}.Using sqrt{n} as the loop limit drastically reduces the number of iterations.

    */
    

    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    
    // int factor = 0;
    // for(int i = 1; i<=n; i++){
    //     if(n%i == 0) {
    //         factor +=1;
    //     }
    // }

    // if(factor==1) cout<<"Niether prime nor composite";
    // else if(factor >= 3) cout<<"Composite Number";
    // else cout<<"Prime Number";

    // bool flag = false; //false means prime
    
    // for(int i =2; i<=n-1; i++){
    //     if(n%i == 0){
    //         flag = true;
    //         break;
    //     }
    // }
    // if(n==1) cout<<"Niether Prime nor composite";
    // else if(flag==true) cout<<"Composite Number";
    // else cout<<"Prime Number";
    
    bool flag = false; 
    //false means prime
    // i*i<=n; or i<=sqrt(n);
    for(int i =2; i<=sqrt(n); i++){
        if(n%i == 0){
            flag = true;
            break;
        }
    }
    if(n==1) cout<<"Niether Prime nor composite";
    else if(flag==true) cout<<"Composite Number";
    else cout<<"Prime Number";

}