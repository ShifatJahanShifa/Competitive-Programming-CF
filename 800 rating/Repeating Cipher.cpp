problem link: https://codeforces.com/problemset/problem/1095/A

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,increment=1;cin>>n;
    string s,res="";cin>>s;
    for (int i = 0; i <n; i++)
    {
        res+=s[i];
        i+=increment;
        increment++;
    }
    cout<<res;
}
