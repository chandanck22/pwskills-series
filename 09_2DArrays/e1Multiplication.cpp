#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> multiple(vector<vector<int>> arr1, vector<vector<int>> arr2, vector<vector<int>> arr3, int n, int m)
{
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            arr3[i][j] = 0;
            for(int k=0; k<n; ++k){
                arr3[i][j] += arr1[i][j] * arr2[i][j];
            }
        }
    }
    return arr3;
}
void printVector(vector<vector<int>> v)
{
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }

}

int main(){
	int n,m;
	cin>>n>>m;

	vector<vector<int>> arr1(n, vector<int>(m));
	// vector<vector<int>> arr1(vector<int>(n), vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr1[i][j];
		}
	}

    vector<vector<int>> arr2(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }

	vector<vector<int>> ans = multiple(arr1, arr2, n, m);
	printVector(ans);

	return 0;
}
