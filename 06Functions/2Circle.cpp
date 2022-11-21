/*
Given Radius of a circle.
Print the area and cirumference of the circle.
*/

#include <iostream>
using namespace std;

double area(double pi, double r)        // pi and r are formal parameter
{
    double ar = pi*r*r;
    return ar;
}
double cirumference(double pi, double r)
{
    double cf = 2*pi*r;
    return cf;
}

int main()
{
    double pi = 3.14;
    double r = 5.0;

    cout<<"Area is: "<<area(pi, r)<<endl;               // pi and r is actual parameter
    cout<<"Cirumference is: "<<cirumference(pi, r)<<endl;
    return 0;
}
