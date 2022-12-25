#include <iostream>
using namespace std;

bool powerof(int n)
{
    n = n/2;
    // base case
    if(n == 2)
        return 1;

    else if (n>2){
        return powerof(n);
    }
    else{
        return false;
    }

    // return powerof(n/2);
}

int main()
{
    int n;
    cin>>n;

    cout<<powerof(n)<<endl;
}
