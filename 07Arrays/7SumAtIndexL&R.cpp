/*
Find the sum of the elements between the index L and R.
Input:
[1,2,3,4,5] L=1, R=3
Output:
9(2+3+4)
Input:
[1,2,3,4,5] L=2, R=2
Output:
3
*/
#include <iostream>
#include <vector>
using namespace std;

int sumAtLandR(int arr[], int n, int L, int R)
{
    for(int i=0; i<n; ++i){
        arr[i] += arr[i-1];
    }
    int sum = arr[R] - arr[L-1];
    return sum;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int ans = sumAtLandR(arr, n, 1, 3);
    cout<<ans<<endl;
    return 0;
}
