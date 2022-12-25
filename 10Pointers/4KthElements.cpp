/*
Write a program to print the kth element of an array using pointers.(0 <= k < size)
*/

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,key;
    // cout<<"Enter Size: ";
    cin>>n;
    // cout<<"Enter Key: ";
    cin>>key;
    int arr[n];
    // cout<<"ENter array: ";
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }

    if(key>n)
        return -1;
    if(key<0)
        return -1;
    else{
        int *ptr = (arr + key - 1);
        cout<<*ptr;
    }




    return 0;
}
