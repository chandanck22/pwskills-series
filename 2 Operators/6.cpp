/*
Design a calculate to perform basic arithmetic operation (+,-,*,/).
*/

#include <iostream>
using namespace std;

int main()
{
    float a,b;
    char n;
    cout<<"Enter two value to perform operation: ";
    cin>>a>>b;
    cout<<"Enter the operation to be perform (+ - * /): ";
    cin>>n;
    cout<<endl;
    if(n == '+')
        cout<<"Sum is: "<<a+b<<endl;
    if(n == '-')
        cout<<"Sub is: "<<a-b<<endl;
    if(n == '*')
        cout<<"Multiple is: "<<a*b<<endl;
    if(n == '/')
        cout<<"Divide is: "<<a/b<<endl;

    else
        cout<<"Enter the right value"<<endl;

    return 0;
}
