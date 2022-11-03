/*
Age is given write a function to check if the persin is eligible to vote or not.
*/
#include <iostream>
using namespace std;

void vote()
{
    int age;
    cout<<"Enter AGE: ";
    cin>>age;
    if(age >= 18)
        cout<<"You are eligible for Vote";
    else
        cout<<"You are not eligible for Vote";
}

int main()
{
    vote();
    return 0;
}
