/*
Write a fuction that returns the first and last character and the number of occurrences of string given by user.
*/

#include <bits/stdc++.h>
using namespace std;

int occr(string s, char *f, char *l, char search)
{
    *f = s[0];
    *l = s[s.size()-1];
    int cnt = 0;
    for(auto &ch : s){
        if(ch == search){
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    string s;
// enter the string
    cin>>s;
    char f,l, search;
    // enter search character
    cin>>search;
    int count = occr(s, &f, &l, search);
    cout<<f<<" "<<l<<" "<<count<<endl;


    return 0;
}
