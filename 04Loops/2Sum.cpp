/*
Find the sum of the digits in a given number 'n'.
*/
#include<iostream>
using namespace std;

int main()
{
    int n, sum=0;
cout<<"Enter the number to find sum: ";
    cin>>n;
    while (n > 0) {
        sum += n%10;
        n /= 10;
    }
    cout<<"Sum is: "<<sum<<endl;

    return 0;
}
