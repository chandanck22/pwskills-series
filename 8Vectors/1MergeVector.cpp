/*
merge two given vectors
*/

#include<iostream>
#include <vector>
using namespace std;

void print(auto const &vector)
{
	for (auto i: vector) {
		cout<<i<<' ';
	}
	cout<<endl;
}


int main()
{
    vector<int> arr1={1,2,5};
    vector<int> arr2={4,3,6};


    std::vector<int> v(arr1);

    v.clear();

    v.insert(v.begin(), arr1.begin(), arr1.end());
    v.insert(v.end(), arr2.begin(), arr2.end());
    print(v);



    return 0;
}
