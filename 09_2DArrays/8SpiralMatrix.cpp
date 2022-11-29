/*
Given an n*m matrix 'a' return all elements of the matrix in spiral order.

Input:
1 2 3
8 9 4
7 6 5

Output:
1 2 3 4 5 6 7 8 9
*/

#include <iostream>
#include <vector>
using namespace std;


vector<int> spiralMatrix(vector<vector<int>> &matrix )
{
	vector<int> ans;

	// no. of rows
	int row = matrix.size();
	int col = matrix[0].size();

	int count = 0;
	int total = row*col;

	// index initialisation
	int startingRow = 0;
	int startingCol = 0;
	int endingRow = row-1;
	int endingCol = col-1;

	while(count < total){

		// print starting row
		for(int index=startingCol; count<total && index<=endingCol; index++){
			ans.push_back(matrix[startingRow][index]);
			count++;
		}
		startingRow++;

		// print ending column
		for(int index=startingRow; count<total && index<=endingRow; index++){
			ans.push_back(matrix[index][endingCol]);
			count++;
		}
		endingCol--;

		// print ending row
		for(int index=endingCol; count<total && index>=startingCol; index--){
			ans.push_back(matrix[endingRow][index]);
			count++;
		}
		endingRow--;

		// print starting column
		for(int index=endingRow; count<total && index>=startingRow; index--){
			ans.push_back(matrix[index][startingCol]);
			count++;
		}
		startingCol++;
	}
	return ans;
}


void printVector(vector<int> v)
{
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){

	int n,m;
	cin>>n>>m;

	vector<vector<int>> arr(n, vector<int> (m, 0));

	// int n = arr.size();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}

	vector<int> ans = spiralMatrix(arr);
	printVector(ans);

	return 0;
}
