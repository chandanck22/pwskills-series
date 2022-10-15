/*
Program to check whether two number(enter by the user) are equal or not.
*/


#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter two number: ";
    cin>>x>>y;

    if(x == y)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal"<<endl;

    return 0;
}
