/*
Given a 2D matrix with m rows and n columns containing integers, find and print the
maximum value present in the array.
m=3
n=3
arr[] = {{1,2,3}, {4,5,6}, {7,8,9}}
Output: 9

*/
#include <iostream>
#include <climits>
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

    int max = INT_MIN;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout<<max;

    return 0;

}
