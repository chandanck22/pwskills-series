/*
Program to take value of two variable from the user and check if both the conditions :-
'a < 50'
'a < b'  are true
*/


#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two value: ";
    cin>>a>>b;

    if(a < 50 && a < b)
        cout<<"true";
    else
        cout<<"false";

    return 0;
}
