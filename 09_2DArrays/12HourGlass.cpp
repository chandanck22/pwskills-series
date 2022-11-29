/*
You are given an m x n integer matrix grid. Here m>=3 and n>=3
We define an hourglass as a part of the matrix with the following shape:

Input:
[[1,2,3],
 [4,5,6],
 [7,8,9]]
Output: 35 (1+2+3+5+7+8+9=35)
1 2 3
  5
7 8 9

Input:
[[6,2,1,3],
 [4,2,1,5],
 [9,2,8,7],
 [4,1,2,9]]

Output: 30 (6+2+1+2+9+2+8)
*/


#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            cin>>arr[i][j];
        }
    }

    int ans = 0;
    int sum = 0;

    for(int i=0; i<=m-3; ++i){
        for(int j=0; j<=n-3; ++j){
            sum = 0;
            for(int k=j; k<j+3; k++){
                // adds 1st row
                sum = sum + arr[i][k];
                // adds 3rd row
                sum = sum + arr[i+2][k];
            }
            sum += arr[i+1][j+1];
            if(ans < sum){
                ans = sum;
            }
        }
    }
    cout<<ans;
}
