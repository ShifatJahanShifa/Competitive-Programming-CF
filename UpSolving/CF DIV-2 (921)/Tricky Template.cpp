#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n; string s1,s2,s3; 
        cin>>n>>s1>>s2>>s3;
        bool ok=false;
        for (int i = 0; i <n; i++)
        {
            if(s1[i]!=s3[i] and s2[i]!=s3[i]) 
            {
                ok=true;
                break;
            }
        }
        ok ? cout<<"YES\n":cout<<"NO\n";
    }
}
