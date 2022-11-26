/*
Write a program which takes integer square matrix as an input and return upper half of the matrix.
Input:
arr[][] = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
Output:
1   2   3   4
    6   7   8
        11  12
            16

*/

#include <bits/stdc++.h>
using namespace std;

void upperMatrix(vector<vector<int>> arr, int n)
{
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(j >= i){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    // cout<<"Enter Size: ";
    cin>>n;

    vector<vector<int>> arr(n, vector<int> (n));
    // cout<<" Enter Matrix: "<<endl;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin>>arr[i][j];
        }
    }
    upper(arr, r);
}
