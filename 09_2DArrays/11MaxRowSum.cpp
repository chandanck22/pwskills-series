/*
Input:
m=3
n=3
arr[] = {{1,9,6}, {4,5,2}, {7,8,3}}
Output: 3
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin>>arr[i][j];
        }
    }

    int sum = INT_MIN;
    int row = -1;
    int temp = -1;

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            arr[i][j] = arr[i][j] + arr[i][j-1];
        }
        if(arr[i][n-1] > temp){
            temp = arr[i][n-1];
            row = i;
        }
    }

    cout<<row+1;
}
