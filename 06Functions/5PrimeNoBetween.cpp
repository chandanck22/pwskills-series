/*
prime numbers b/t a and b.
*/
#include <iostream>
using namespace std;

void primeNo(int a, int b)
{
    for(int i=a; i<=b; i++){
        int prime = 1;
        for(int j=a; j<= i/2; j++){
            if(i%j == 0){
                prime = 0;
                break;
            }
        }
        if(prime == 1)
            cout<<i<<" ";
    }
}

int main()
{
    int a,b;
    cout<<"Enter two numbers to find PRIME numbers b/t them: ";
    cin>>a>>b;
    primeNo(a,b);
    return 0;
}
