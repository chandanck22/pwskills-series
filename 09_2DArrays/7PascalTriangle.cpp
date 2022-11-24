/*
Initializing a 2-D vector of n rows and m columns:
 vector<vector<int>> veYt( n ,vector<int> (m));

*/
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascal(int n)
{
    vector<vector<int>> arr;
    for(int i=0; i<n; ++i){
        vector<int> row(i+1, 1);
        for(int j=1; j<i; ++j){
            row[j] = arr[i-1][j] + arr[i-1][j-1];
        }
        arr.push_back(row);
    }
    return arr;
}

int main()
{
    int n;
    cout<<"Enter no. of Rows: ";
    cin>>n;
    vector<vector<int>> ans;
    ans = pascal(n);

    for(int i=0; i<ans.size(); ++i){
        for(int j=0; j<ans[i].size(); ++j){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
