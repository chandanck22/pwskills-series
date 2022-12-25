/*
prime numbers b/t a and b.
*/
#include <iostream>
using namespace std;

// method 1
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
// method 2
//function to check if a number is prime or not
bool isPrime(int num)
{
    if(num < 2)
        return false;

    for(int i=2; i*i<=num; i++)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}

//function to find the total number of prime numbers in a given interval
int totalPrime(int start, int end)
    {
    int count = 0;
    for(int i=start; i<=end; i++){
        if(isPrime(i))
            count++;
    }
    return count;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers to find PRIME numbers b/t them: ";
    cin>>a>>b;
    primeNo(a,b);
    cout<<endl;
    cout<<totalPrime(a, b);
    return 0;
}
