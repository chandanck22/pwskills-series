/*
Given 2 numbers a and b. Find a raise to the power b.
*/
#include<iostream>
using namespace std;

int main()
{
    int a,b, ans=1;
    cout<<"Enter the two value to find a^b: ";
    cin>>a>>b;
    for(int i=1; i<=b; ++i){
        ans *= a;
    }
    cout<<a<<"^"<<b<<" is: "<<ans<<endl;
    return 0;
}
