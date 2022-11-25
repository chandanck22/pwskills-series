/*
Given an n*m matrix 'a' return all elements of the matrix in spiral order.

Input:
1 2 3
8 9 4
7 6 5

Output:
1 2 3 4 5 6 7 8 9
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> & a)
{
	int n = a.size();
	int m = a[0].size();
	int left = 0, right = m-1, up = 0, down = n-1;

	vector<int> ans;

	while(ans.size() < n*m){
		for(int j=left; j <= right && ans.size() < n*m; j++){
			ans.push_back(a[up][j]);
		}
		for(int i=up+1; i <= down-1 && ans.size() < n*m; i++){
			ans.push_back(a[i][right]);
		}
		for(int j=right; j >= left && ans.size() < n*m; j--){
			ans.push_back(a[down][j]);
		}
		for(int i=down-1; i >= up+1 && ans.size() < n*m; i--){
			ans.push_back(a[i][left]);
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
	int n, m;
	cin>>n>>m;

	vector<vector<int>> a(n, vector<int> (m, 0));

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}

	vector<int> ans = spiralMatrix(a);

	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
