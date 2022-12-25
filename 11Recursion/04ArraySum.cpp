/*
Given an array of integers, print a sum triangle using recursion from it such that the first level
has all array elements. After that, at each level the number of elements is one less than the previous
level and elements at the level will be the Sum of consecutive two elements in the previous level.

Sample Input: [5,4,3,2,1]
Sample Output:
5, 4, 3, 2, 1
9, 7, 5, 3
16, 12, 8
28, 20
48
*/
#include <iostream>
using namespace std;

void matrixSum(int arr[], int n)
{
    // base case
    if(n < 1)
        return;

    for(int i=0; i<n; i++){
        if(i == n-1){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    int l[n-1];

    for(int i=0; i<n-1; i++){
        int sum = arr[i] + arr[i+1];
        l[i] = sum;
    }

    matrixSum(l, n-1);
}

int main()
{
    int arr[10] = {3,4,7,8,6};

    matrixSum(arr, 5);
}
