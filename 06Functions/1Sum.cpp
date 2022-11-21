/*
Write a function to print squares of the first 5 natural numbers.
*/

#include <iostream>
using namespace std;

int natural(int n)
{
    int sq = n*n;
    return sq;

}

int main()
{
    for(int i=1; i<=5; i++){
        cout<<natural(i)<<" ";
    }
    return 0;
}
