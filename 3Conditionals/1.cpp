/*
Write a program which takes the values of length and breath from user and check if it is a square or not.
*/

#include<iostream>
using namespace std;

int main()
{
	int l, b;
	cout<<"Enter the length and breath: ";
	cin>>l>>b;

	if( l == b)
		cout<<"It is Square"<<endl;
	else{
		cout<<"It is Rectangle"<<endl;
	}


}
