#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n>>m;
        vector<ll>a(n),b(m);
        set<ll,greater<ll>>sta,stb;
        map<ll,ll>mpa,mpb;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mpa[a[i]]++;
            sta.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            mpb[b[i]]++;
            stb.insert(b[i]);
        }
        bool ok=false;
        while (1)
        {
            if(sta.empty() and stb.empty())
            {
                ok=true;
                break;
            } 
            else if(sta.empty() or stb.empty())
            {
                break;
            }
            else 
            {
                ll maxa=*(sta.begin());
                ll maxb=*(stb.begin());
                if(maxa>maxb) 
                {
                    break;
                }
                else if(maxa==maxb) 
                {
                    ll cnta=mpa[maxa];
                    ll cntb=mpb[maxb];
                    ll del=min(cnta,cntb);
                    mpa[maxa]-=del;
                    mpb[maxb]-=del;
                    if(mpa[maxa]==0) sta.erase(maxa);
                    if(mpb[maxb]==0) stb.erase(maxb);
                }
                else 
                {
                    ll f=maxb/2;
                    ll c=(maxb+1)/2;
                    int cntb=mpb[maxb];
                    mpb[f]+=cntb;
                    mpb[c]+=cntb;
                    stb.erase(maxb);
                    stb.insert(f);
                    stb.insert(c);
                }
            }
        }
        
        ok ? puts("YES") : puts("NO");
    }
}
