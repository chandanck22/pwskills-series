/*
Find the numbers of unique pairs that exist in the array whose absolute sum is exactly x.
Input:
[1,2,3,4,6] x=7
Output:
2 (1,6 and 3,4 sum of 7)
Input:
[3,1,3,5,3] x=6
Output:
2 (unique pairs are 3,3 and 1,5)
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr={1,2,3,4,6};
    int x;
    cin>>x;
    int ans=0;
    int i=0, j=arr.size()-1;
    while(i < j){
        // found
        if(arr[i] + arr[j] == x){
            ans++;
            i++;
            j--;
        }
        // sum is large decrease the bigger elements
        else if(arr[i] + arr[j] > x)
            j--;
        else // sum is small increase smaller elements
            i++;
    }
    cout<<ans<<endl;


    return 0;
}
