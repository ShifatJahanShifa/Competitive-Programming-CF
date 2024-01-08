#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int s;cin>>s;
        string ans="";
        for (int i = 9; i>0; i--)
        {
            if(s>i) 
            {
                ans=char(i+'0')+ans;
                s-=i;
            }
            else 
            {
                ans=char(s+'0')+ans;
                break;
            }
        }
        cout<<ans;
        puts("");
    }
}

