/*
Write a program to find the sum of all the elements of an array. Use pointers to traverse
the array.*/

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    // cout<<"Enter Size: ";
    cin>>n;
    int arr[n];
    int *ptr = arr;

    // cout<<"ENter array: ";
    for(int i=0; i<n; ++i){
        cin>>*ptr;
        ptr++;
    }
    ptr = arr;
    int sum = 0;

    for(int i=0; i<n; ++i){
        sum += *ptr;
        ptr++;
    }

    cout<<sum<<endl;




    return 0;
}
