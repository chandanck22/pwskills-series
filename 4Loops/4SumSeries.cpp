/*
Find sum of the following series:-
1-2+3-4+5-6 ... n
*/

#include <iostream>
#include <cmath>
using namespace std;

int the_sum(int n) {
  int a = (n + 1) / 2;
  int b = n / 2;
  return a*a - b*b - b;
}

int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"Sum is: "<<the_sum(n);
    return 0;
}
