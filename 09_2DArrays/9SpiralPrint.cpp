/*
Given an +vec integer n, generate an n*n matrix filled with elements from 1 to n^2 in spiral order.

Input:
3

Output:
1 2 3
8 9 4
7 6 5
*/


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> spiralMatrix(int n)
{
    vector<vector<int>> ans(n, vector<int> (n, -1));
    int val = 1;
	int left = 0, right = n-1;
    int up = 0, down = n-1;

	n = n*n;
    n++;

	while(val < n){
		for(int j=left; j <= right && val < n; j++){
			ans[up][j] = val++;
		}
		for(int i=up+1; i <= down-1 && val < n; i++){
			ans[i][right] = val++;
		}
		for(int j=right; j >= left && val < n; j--){
			ans[down][j] = val++;
		}
		for(int i=down-1; i >= up+1 && val < n; i--){
			ans[i][left] = val++;
		}

		left++;
		right--;
		up++;
		down--;
	}

	return ans;
}

int main()
{
	int n;
	cin>>n;

	vector<vector<int>> a(n, vector<int> (n, 0));
    a = spiralMatrix(n);

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
        cout<<endl;
	}
}
