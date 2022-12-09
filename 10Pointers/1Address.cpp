#include <bits/stdc++.h>
using namespace std;

//  To print the address of an integer variable
void printAddress()
{
    int num = 10;
    // cin>>num;
    cout<<&num<<endl;
}
// To find the product of 2 numbers using pointers
void product()
{
    int a=10;
    int b=20;

    int *ptr = &a;
    int *ptr2 = &b;

    int multi = *ptr * *ptr2;

    cout<<multi<<endl;
}


int main()
{
    printAddress();
    product();

    return 0;
}
