/*
Program to return largest and smallest numbers out of 3 numbers using pointers.
*/
#include <bits/stdc++.h>
using namespace std;

int largAndSmall(int a, int b, int c, int *larg)
{
    *larg = max(a, max(b,c));
    return min(a, min(b,c));
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int larg;
    int small = largAndSmall(a,b,c, &larg);

    cout<<larg<<" "<<small<<endl;

    return 0;
}
