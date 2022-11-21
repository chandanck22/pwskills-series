/*
Given an integer array and its size reverse the array and print.
*/
#include <iostream>
using namespace std;

void swap(int arr[], int n)
{
    int start=0, end=n-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    for(int i=0; i<n; ++i)
        cout<<arr[i]<<" ";

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    cout<<"Before Swap:"<<endl;
    for(int i=0; i<n; ++i)
        cout<<arr[i]<<" ";

    cout<<endl<<"After Swap!"<<endl;

    swap(arr, n);
    return 0;
}
