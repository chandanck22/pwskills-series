/*
Program to take input from user for Cost Price(C.P) and selling price(S.P) and calculate Profit or Loss.
*/
#include<iostream>
using namespace std;

int main()
{
    float cp, sp, total;
    cout<<"Enter Cost Price (C.P): ";
    cin>>cp;
    cout<<"Enter Selling Price (S.P): ";
    cin>>sp;

    if(sp > cp){
        total = sp - cp;
        cout<<"Profit: "<<total<<endl;
    }
    else if(sp < cp){
        total = cp - sp;
        cout<<"Loss is: "<<total<<endl;
    }
    else
        cout<<"\nNeither Profit nor Loss !"<<endl;

    return 0;
}
