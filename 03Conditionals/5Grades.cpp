/*
Program to calculate marks to grades.
*/

#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter Your Marks: ";
    cin>>marks;

    if(marks >= 90)
        cout<<"A+"<<endl;
    else if(marks >= 80 )
        cout<<"A"<<endl;
    else if(marks >= 70 )
        cout<<"B+"<<endl;
    else if(marks >= 60 )
        cout<<"B"<<endl;
    else if(marks >= 50 )
        cout<<"C"<<endl;
    else if(marks >= 40 )
        cout<<"D"<<endl;
    else if(marks <= 30)
        cout<<"F"<<endl;
    else
        cout<<"Enter Valid Marks:"<<endl;
    return 0;
}
