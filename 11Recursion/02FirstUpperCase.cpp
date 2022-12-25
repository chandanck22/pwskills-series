/*
 Find the first uppercase letter in the given string and return its index.
*/

#include <iostream>
using namespace std;

int upperCase(string s, int n)
{
    // base case
    if(s[n] == '\0')
        return -1;

    else if (isupper(s[n])){
        return n;
    }

    return upperCase(s, n+1);

}

int main()
{
    string s;
    cin>>s;

    cout<<upperCase(s, 0)<<endl;
}
