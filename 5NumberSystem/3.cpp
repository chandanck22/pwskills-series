/*
Check the greates numbers in decimal format in two given binary numbers.

Input:
1001 & 0100

Output:
9
*/

#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter two binary numbers:";
    cin>>n1>>n2;
    int c = 1;
    int dec1 = 0;
    int dec2 = 0;
    // covert n1 to decimal
    while(n1 > 0){
        int unit = n1 % 10;
        dec1 += c *unit;
        n1 /= 10;
        c *= 2;
    }
    c = 1;
    // convert n2 to decimal
    while(n2 > 0){
        int unit = n2 % 10;
        dec2 += c * unit;
        n2 /= 10;
        c *= 2;
    }
    //comparing
    if(dec1 > dec2){
        cout<<"Greator: "<<dec1<<endl;
    }else{
        cout<<"Greator: "<<dec2<<endl;
    }
    return 0;
}
