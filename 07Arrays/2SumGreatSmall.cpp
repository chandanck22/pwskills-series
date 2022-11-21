/*
Given an integer array and its size, find sum of greatest and smallest integer.
*/

// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumofLargAndSma(int arr[], int n)
{
    int max=arr[0], min=arr[0];
    for(int i=1; i<n; ++i){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    return max+min;
}

int main()
{
    int arr[] = {10,3,5,2,4,7,6,8,9,1};
    int n=10;
    int ans = sumofLargAndSma(arr, n);
    cout<<ans<<endl;
    return 0;
}
