/*
Using pointers, find the sum of elements present on the primary diagonal of the given n x
n 2-D matrix.
Input:
3
1 2 3
4 5 6
7 8 9

Output:
15
*/

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    // cout<<"Enter Size: ";
    cin>>n;
    int arr[n][n];

    // cout<<"ENter array: ";
    for(int i=0; i<n; ++i){
        for (int j = 0; j < n; ++j)
        {
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for(int i=0; i<n; ++i){
        sum += *(*(arr+i) + i);
    }

    cout<<sum<<endl;

    return 0;
}
