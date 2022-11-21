/*
Given an array conntaining n distint integers in the range [0,n]. Find and return the only number of the range that is not present in the array.
Input:
a[] = {3,0,1}
Output:
2 (range will be [0,3])

Input:
a[] = {8,6,4,2,3,5,0,1}
Output:
8 (range will be [0,8])

*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = 11;

    int count=0;
    int end = arr[n];
    for(int i=0; i<n; ++i){
        if(arr[i] <= end)
            count++;
    }
    cout<<count-1<<endl;

    return 0;
}
