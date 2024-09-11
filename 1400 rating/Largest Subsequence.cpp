#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// const ll mod=1000000007;
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

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n;
        string s,b;cin>>s;
        vector<pair<int,char>>vp;
        set<char>st(s.begin(),s.end());
        vector<char>ch;
        for(auto it:st) 
        {
            ch.push_back(it);
        }
        reverse(ch.begin(),ch.end());
        int idx=0;
        int sz=ch.size();
        map<char,int>last;
        for (int i = 0; i <n; i++)
        {
            last[s[i]]=i;
        }
        for (int i = 0; i <n; i++)
        {
            if(s[i]==ch[idx]) 
            {
                vp.push_back(make_pair(i,s[i]));
                if(last[s[i]]==i) 
                {
                    bool got=false;
                    for (int j =idx+1;j<sz; j++)
                    {
                        if(last[ch[j]]>i) 
                        {
                            idx=j;
                            got=true;
                            break;
                        }
                    }
                    if(!got) break;
                }
            }
        }
        vector<int>pos;
        vector<char>chng;
        for (int i = 0; i <vp.size(); i++)
        {
            auto it=vp[i];
            pos.push_back(it.first);
            chng.push_back(it.second);
        }
        reverse(chng.begin(),chng.end());
        for (int i = 0; i <pos.size(); i++)
        {
            s[pos[i]]=chng[i];
        }
        bool ok=true;
        for (int i = 1; i <n; i++)
        {
            if(s[i]<s[i-1]) 
            {
                ok=false;
                break;
            }
        }
        multiset<char>stt(chng.begin(),chng.end());
        int ans=vp.size();
        ans-=stt.count(ch[0]);
        ok? cout<<ans<<"\n": cout<<"-1\n";
    }
}
