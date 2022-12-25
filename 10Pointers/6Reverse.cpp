// Reverse the array using pointers.

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    // cout<<"Enter Size: ";
    cin>>n;
    int arr[n];

    // cout<<"ENter array: ";
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }

    int *ptr = &arr[n-1];
    while(1){
        cout<<*ptr<<" ";
        if(ptr == arr)
            break;

        ptr--;
    }

    return 0;
}
