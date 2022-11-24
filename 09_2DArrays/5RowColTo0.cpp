/*
Given a m*n integer matrix. If an element of the matrix is 0 then set the complete row and
column of that element to 0. Make the changes inplace and print the matrix.
m=3
n=3
arr[]={{1,2,3},{1,0,1},{5,6,7}}
Output: {{1,0,3},{0,0,0},{5,0,7}}
arr[]={{0,1,2,0},{3,4,5,2},{1,3,1,5}}
Output:{{0,0,0,0},{0,4,5,0},{0,3,1,0}}

Input:
1 2 3
1 0 1
5 6 7
Output:
1 0 3
0 0 0
5 0 7
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter Size Row and Col: ";
    cin>>m>>n;
    int arr[m][n];

    cout<<"Enter Array: "<<endl;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    vector<pair<int, int>> ans;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(arr[i][j] == 0){
                ans.push_back({i,j});
            }
        }
    }

    for(int i=0; i<ans.size(); ++i){
        int x = ans[i].first;
        int y = ans[i].second;
        int row = 0;
        int col = 0;

        while(row < m){
            arr[row][y] = 0;
            row++;
        }
        while(col < n){
            arr[x][col] = 0;
            col++;
        }
    }
    cout<<endl;

    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
