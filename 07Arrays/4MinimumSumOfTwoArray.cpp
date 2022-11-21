/*
Given two array of same size, Find the minimum sum of two elements such that they belong to different arrays and are not at the same index.
a[] = {5,6,10,4,9}
b[] = {1,2,3,4,5}
Output:
5 (a[3]+b[0])
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int brr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cin>>brr[i];
	}
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				ans=min(arr[i]+brr[j],ans);
			}
		}
	}
	if(ans==INT_MAX){
		cout<<-1;
	}
	else{
		cout<<ans;
	}

}
