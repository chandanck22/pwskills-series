/*
Given an integer array containing n elements. Find the elements in the array for which all the elements to its left are smaller then it and the elements to the right of it are larger then it.
Input:
a[] = {1,6,5,7,10,8,9}
Output:
7

Input:
a[] = {5,6,2,8,10,9}
Output:
-1

*/
#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v)
{
    for(int i:v)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	vector<int> first(n), second(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	first[0]=0;second[n-1]=n-1;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[first[i-1]]){
			first[i]=i;
		}
		else{
			first[i]=first[i-1];
		}
	}
	for(int i=n-2;i>=0;i--){
		if(arr[i]<arr[second[i+1]]){
			second[i]=i;
		}
		else{
			second[i]=second[i+1];
		}
	}
	for(int i=1;i<n-1;i++){
		if(first[i]==second[i]){
			cout<<arr[first[i]]<<" ";
		}
	}
	if(first.size()==0){
		cout<<-1;
	}
}
