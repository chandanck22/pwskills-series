/*
Given two numbers write a function to print odd numbers b/t them.
*/

#include <iostream>
using namespace std;

void odd(int a, int b)
{
    for(int i=a; i<b; i++){
        if(i%2 != 0)
            cout<<i<<" ";
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers to find ODD numbers b/t them: ";
    cin>>a>>b;
    odd(a,b);
    return 0;
}
