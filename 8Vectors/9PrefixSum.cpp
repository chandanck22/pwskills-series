/*
Find the prefix sum in the same array without creating a new array.
Input:
5 4 1 2 3
Output:
6 9 10 12 15
*/

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &v, int n)
{
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sum(vector<int> a, int n)
{
    for(int i=1; i<n; ++i){
        a[i] += a[i-1];
    }
    printVector(a,n);
}

int main()
{
    vector<int> a={5,4,1,2,3};
    int n = a.size();

    sum(a,n);

}
