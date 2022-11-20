/*
Program to print absolute value of a number entered by the user.
*/

#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;         //  -4
    if(x < 0)
        x *= (-1);

    cout<<"Absolute value is: "<<x<<endl;   // 4


    return 0;
}
