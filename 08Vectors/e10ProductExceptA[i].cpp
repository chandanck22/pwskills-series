/*
Given an integer array arr, return an array ans such that ans[i] is equal to the product of
all the elements of arr except arr[i].

Input:
arr=[1,3,5,7]
Output:
[105,35,21,15] (ans=[3*5*7,1*5*7,1*3*7,1*3*5])

Input:
[-5,-4,0,4,5]
Output:
[0,0,400,0,0]
*/

#include <bits/stdc++.h>
using namespace std;

int product(vector<int> &arr, int n)
{
    vector<int> arr(n);
    int pre[n];
    pre[0] = n[0];
    int pos[n];
    pos[n-1] = n[n-1];

    for(int i=1; i<n; ++i){
        pre[i] = n[i] * pre[i-1];
    }
    cout<<pos[n-1];

    for(int i=n-2; i>=0; i--){
        pos[i] = pos[i+1]*nums[i];
    }
    for(int i=0; i<n-1; ++i){
        if(i == 0)
            ans[0] = pos[1];
        else
            ans[i] = pos[i+1] *  pre[i-1];
    }
    ans[n-1] = pre[n-2];

    return ans;
}

int main()
{
    vector<int> a={1,3,5,7};

    return 0;
}
