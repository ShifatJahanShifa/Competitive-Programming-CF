problem link: https://codeforces.com/problemset/problem/1303/A

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s; cin>>s;
        int ans=0,zeroes=0;
        bool one=false;
        for (int i = 0; i <s.size(); i++)
        {
            if(s[i]=='1') 
            {
                if(one)
                {
                    ans+=zeroes;
                    zeroes=0;
                }
                else
                {
                    zeroes=0;
                    one=true;
                }
            }
            else 
            {
                zeroes++;
            }
        }
        cout<<ans<<"\n";
    }
}
