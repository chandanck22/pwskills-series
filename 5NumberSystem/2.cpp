/*
Numbers of 0's in given binary numbers
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int ans=0;
    while (n > 0) {
        int c = n % 2;
        if(c == 0){
            ans++;
        }
        n /= 2;
    }
    cout<<"Numbers of 0's is "<<ans<<endl;

    return 0;
}
