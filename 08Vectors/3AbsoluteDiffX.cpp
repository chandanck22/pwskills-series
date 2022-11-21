/*
Given a vector arr sorted of n size and an interger x, find if there exists a pair in the array whose absoulte difference is x.
Input:
[5,10,15,20,26] x=10
Output:
Yes
Input:
[2,6,7,8,9] x=10
Output:
No
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {5,10,15,20,26};
    int n=5;
    int x;
    cin>>x;
    int i=0;
    int j=1;
    while(i<n && j<n){
        if((arr[j] - arr[i]) == (x)){
            cout<<"Yes";
        }else if((arr[j]-arr[i]) < (x)){
            j++;
        }
        else
            i++;
    }
    cout<<"No";
    // return 0;
}
