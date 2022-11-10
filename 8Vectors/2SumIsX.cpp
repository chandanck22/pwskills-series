/*
Given a vector arr sorted of n size and an interger x, find if there exists a pair in the array whose sum is exactly x.
Input:
[-1,0,1,2,3] x=2
Output:
Yes
Input:
[1,2,3,4] x=9
Output:
No
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr={1,2,3,4,5,6};
    int n=6;
    int x;
    cin>>x;
    int i=0;
    int j = n-1;
    while(i < j){
        if(arr[i] + arr[j] == x){
            cout<<"Yes";
            break;
        }else{
            cout<<"No";
            break;
        }
    }
    // cout<<"No";
    return 0;
}
