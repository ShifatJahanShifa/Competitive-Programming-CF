problem link: https://codeforces.com/contest/514/problem/A


# my solution 

#include <bits/stdc++.h>
using namespace std;

string minimumNumber(string s)
{
    string res;
    int temp1,temp2;
    for (int i = 0; i < s.size(); i++)
    {
        temp1=(s[i]-'0');
        temp2=9-temp1;
        if(temp2<temp1) res+=('0'+temp2);
        else res+=s[i];
    }
    if(res[0]=='0') res[0]=s[0];
    return res;
}

int main()
{
    string s;cin>>s;
    cout<<minimumNumber(s);
}
