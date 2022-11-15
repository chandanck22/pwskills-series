/*
Move all the even interger to the beginning of the array followed by all the odd integer.
Input:
[1,2,3,4,5]
Output:
[2,4,1,3,5]
*/

#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v, int n)
{
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void evenodd1(vector<int> &arr, int n)
{
    int i=0;
    int j = n-1;

    while(i < j){
        if(arr[i] % 2 == 1 && arr[j] % 2 == 0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if(arr[i] % 2 == 0)
            i++;
        else
            j--;
    }
}

bool evenodd2(int a, int b)
{
    if(a%2==0 && a%2==0){
        return true;
    }
    return b%2==1;
}

int main()
{
    vector<int> arr={1,2,3,4,5};
    int n = arr.size();

    // first approch
    evenodd1(arr, n);
    printVector(arr, n);

    // second approch
    sort(arr.begin(),arr.end(),evenodd2);
    printVector(arr, n);


    return 0;
}
