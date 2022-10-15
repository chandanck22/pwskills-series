/*
Swap two number with th help of third variable;
*/


#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    // temporary variable used for swapping
    int temp;
    cout<<"Before Swap: \t"<<x<<" "<<y<<endl;

    temp = x;
    x = y;
    y = temp;

    cout<<"After Swap: \t"<<x<<" "<<y<<endl;


    return 0;
}
