problem link: https://codeforces.com/contest/1811/problem/E

                                                  solution 
------------------------------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

string convertToBase9(long long int n)
{
    string s;
    int mod=0;
    while (n)
    {
        mod=n%9;
        n/=9;
        s+='0'+mod;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int n;cin>>n;
        string res=convertToBase9(n);
        for (int i = 0; i <res.size(); i++)
        {
            (res[i]>'0'+3) ? printf("%c",res[i]+1): printf("%c",res[i]);
        }
        puts("");
    }
}
