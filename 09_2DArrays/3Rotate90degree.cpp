/*
You are given a n*n square matrix, you need to rotate the matrix by 90 degrees in
clockwise direction. You need to do it in-place i.e. you are not allowed to make a new
matrix and allocate the elements to it. Make the changes in the same matrix and print it.

n=3
arr[] = {{1,2,3}, {4,5,6}, {7,8,9}}
Output: {{7,4,1},{8,5,2},{9,6,3}}

Input:
1 2 3
4 5 6
7 8 9

Output:
7 4 1
8 5 2
9 6 3
(rotated by 90 degree)
*/
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    int arr[n][n];

    cout<<"Enter array:"<<endl;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<i; ++j){
            swap(arr[i][j], arr[j][i]);
        }
    }
    // swap Diagonal
    for(int i=0; i<n; ++i){
        for(int j=0; j<n/2; ++j){
            swap(arr[i][j], arr[i][n-j-1]);
        }
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
