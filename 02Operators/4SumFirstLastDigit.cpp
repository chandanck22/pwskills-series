/*
Program to calculate the sum of the first and the second last digit of a 5 digit number.
*/


#include <iostream>
using namespace std;

int main()
{
    int n = 12345, sum=0;
    int a,b,c,d,e;

    //first
    a = n/10000;
    n = n%10000;

    //second
    b = n/1000;
    n = n%1000;

    //third
    c = n/100;
    n = n%100;

    //fourth
    d = n/10;

    //fifth
    e = n%10;

    sum = a + d;
    cout<<"Sum of first and last digit of "<<a<<" "<<d<<" is: "<< sum<<endl;

    return 0;
}
