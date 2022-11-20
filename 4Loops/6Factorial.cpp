/*
Find factorial of n.
1*2*3*4*....n
*/
#include<iostream>
using namespace std;

int main()
{
    int n, fact=1;
    cout<<"Enter the number to find factorial of: ";
    cin>>n;
    for(int i=1; i<=n; ++i){
        fact *= i;
    }
    cout<<"factorial of: "<<fact<<endl;
}
