#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

// ll BE(ll a,ll b)
// {
//     ll ans=1LL;
//     while(b)
//     {
//         if(b%2LL) ans*=a;
//         ans%=mod;
//         a*=a;
//         a%=mod;
//         b/=2LL;
//     }
//     return ans;
// }

// for calculating square root of a large number safely
// ll bs_sqrt(ll x)
// {
//     ll left = 0, right = 2000000000;
//     while (right > left)
//     {
//         ll mid = (left + right) / 2;

//         if (mid * mid > x)
//             right = mid;
//         else
//             left = mid + 1;
//     }
//     return left - 1;
// }

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;cin>>n;
        vector<ll>l(n),r(n),c(n),blend;
        for(auto &it:l) cin>>it;
        for(auto &it:r) cin>>it;
        for(auto &it:c) cin>>it;
        blend=l;
        set<ll>stl,str;
        for (int i = 0; i <n; i++)
        {
            blend.push_back(r[i]);
            stl.insert(l[i]);
            str.insert(r[i]);
        }
        sort(blend.begin(),blend.end());
        sort(c.begin(),c.end());
        vector<pair<ll,char>>vp;
        for (int i = 0; i <n+n; i++)
        {
            if(stl.count(blend[i])) 
            {
                vp.push_back(make_pair(blend[i],'('));
            }
            else 
            {
                vp.push_back(make_pair(blend[i],')'));
            }
        }
        vector<ll>dif;
        stack<pair<ll,char>>stk;
        for (int i = 0; i <n+n; i++)
        {
            if(!stk.empty())
            {
                auto it=stk.top();
                if(it.second=='(' and vp[i].second==')') 
                {
                    dif.push_back(vp[i].first-it.first);
                    stk.pop();
                }
                else stk.push(vp[i]);
            }
            else stk.push(vp[i]);
        }
        sort(dif.begin(),dif.end());
        reverse(c.begin(),c.end());
        ll ans=0;
        for (int i = 0; i <n; i++)
        {
            ans+=(c[i]*dif[i]);
        }
        cout<<ans<<"\n";
    }
}
