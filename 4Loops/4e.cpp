/*
Find sum of the following series:-
1-2+3-4+5-6 ... n
*/

#include<iostream>
using namespace std;

int main()
{
    int n, ans=0;
    cin>>n;

    for(int i=1; i<= n; ++i){
        if(i % 2 == 0)
            ans -= i;
        else
            ans += i;
    }
    cout<<"Answers is: "<<ans<<endl;
    return 0;
}
