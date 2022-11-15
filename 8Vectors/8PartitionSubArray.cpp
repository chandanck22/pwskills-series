/*
Check if we can partiton an input array into two subarrays with equal sum.
Input:
5,2,3,4
Output:
True
*/

#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &a, int n)
{
    int pref = 0;
    int total = 0;
    for(int i=0; i<n; ++i){
        total += a[i];
    }

    for(int i=0; i<n; ++i){
        pref += a[i];
        int suff  = total - pref;
        if(pref == suff)
            return true;
    }
    return false;
}
int main()
{
    vector<int> a = {5,2,3,4};
    int n = a.size();
    cout<<check(a, n)<<endl;


    return 0;
}
