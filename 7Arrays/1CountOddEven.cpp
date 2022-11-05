/*
Given an interger array and its size, print count of odd and even integer present in the array.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int count_even=0;
    int count_odd=0;
    for(int i=0; i<n; ++i){
        if(arr[i]%2 == 0)   // even
            count_even++;
        else
            count_odd++;    // odd
    }
    cout<<"Even: "<<count_even<<endl;
    cout<<"Odd: "<<count_odd<<endl;

    return 0;
}
