/*
Program to calculate the sum of digit of three integer.
*/


#include <iostream>
using namespace std;

int main()
{
    int n = 123, sum=0;
    int a,b,c;

    a = n/100;
    n = n%100;

    b = n/10;
    c = n%10;

    sum = a+b+c;
    cout<<"Sum of first 3 digit is: "<<sum<<endl;

    return 0;
}
