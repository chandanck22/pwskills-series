/*
Print the sum of the first 10 decimal numbers from 1 to 10 in binary formant.
*/
#include<iostream>
using namespace std;

int main()
{
    int sum=0, n=10;
    for(int i=0; i<=n; i++){
        sum += i;
    }
    int ans=0;
    int r = 1;
    while(sum > 0){
        int c = sum % 2;
        ans += r * c;
        r *= 10;
        sum /= 2;
    }
    cout<<ans<<endl;

    return 0;
}
