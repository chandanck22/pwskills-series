/*
Given vector in sorted in increasing order return an array of square of each number sored in increasing order.
Input:
[1,2,3,4]
Output:
[1,2,9,16]
Input:
[-5,-4,-1,-3,-2]
Output:
[1,4,9,16,25]
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={-1,-5,1,2,3,4};

    for(int i=0; i<arr.size(); ++i){
        arr[i] = arr[i] * arr[i];
    }
    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); ++i){
        cout<<arr[i]<<" ";
    }

    return 0;
}
