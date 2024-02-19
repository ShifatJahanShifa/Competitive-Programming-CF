#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n; ll m;cin>>n>>m;
        vector<ll>a(n),element(n);
        for(auto &it:a) cin>>it;
        string s;cin>>s;
        ll mul=1;
        int l=0,r=n-1;
        vector<ll>ans;
        for (int i = 0; i <n; i++)
        {
            if(s[i]=='L') 
            {
                element[i]=a[l];
                l++;
            }
            else 
            {
                element[i]=a[r];
                r--;
            }
        }
        reverse(element.begin(),element.end()); 
        for (int i = 0; i <n; i++)
        {
            mul*=(element[i]%m);
            mul%=m;
            ans.push_back(mul);
        }
        for (int i = n-1; i>-1; i--)
        {
            cout<<ans[i]<<" \n"[i==0];
        }
    }
}

