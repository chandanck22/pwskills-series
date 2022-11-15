/*
Given a vector array nums, print the count of triplets nums[i], nums[j], nums[k] such that i!=j, i!=k, j!=k, and
nums[i] + nums[j] + nums[k] == x.
k is given.

Input:
[-1,0,1,2,-1,-4] x=0;
Output:
2 (-1,0,1 and 1,2,-1)
Input:
[1,2,3] x=5
Output:
0
*/
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int n)
{
	int s=0;
	int e=n;
	int mid = s + (e-s)/2;
	int ans = -1;

	while(s <= e){
		int square = mid*mid;

        if(square == n)
			return mid;
		if(square < n){
			ans = mid;
			s = mid+1;
		}
		else{
			e = mid - 1;
        }
		mid = s + (e-s)/2;
	}
	return ans;
}

int mySqrt(int x)
{
	binarySearch(x);
}

int main()
{
	int n;
	cin>>n;

	cout<<mySqrt(n)<<endl;
}
