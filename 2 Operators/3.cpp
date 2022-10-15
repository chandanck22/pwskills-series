/*
There are total 45 student in class, 25 of whom are boys.
Write a program to find how many girls received grade A if 17 boys made up 80% of the student that recieved grade A.
*/


#include <iostream>
using namespace std;

int main()
{
    int total, b, g;
    b = 17;
    total = (80*45)/100;
    g = total - b;

    cout<<"No. of girls getting grade A is: "<<g<<endl;
    return 0;
}
