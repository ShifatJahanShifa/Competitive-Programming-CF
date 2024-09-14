#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
vector<int>v(200009),gcdStore;
int n;
bool solve(int idx)
{
    gcdStore.clear();
    bool ok=true;
    int f,s;
    for (int i = 0; i <n-1; i++)
    {
        f=i,s=i+1;
        if(f==idx) continue;
        if(s==idx) 
        {
            s+=1;
            if(s==n) break;
        }
        gcdStore.push_back(__gcd(v[f],v[s]));
    }
    for (int i = 1; i <gcdStore.size(); i++)
    {
        if(gcdStore[i]<gcdStore[i-1]) 
        {
            ok=false;
            break;
        }
    }
    return ok;
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        cin>>n;
        v.assign(n,0);
        gcdStore.clear();
        for(int &it:v) cin>>it;
        bool ok=true;
        for (int i = 0; i <n-1; i++)
        {
            gcdStore.push_back(__gcd(v[i],v[i+1]));
        }
        int idx;
        for (int i = 1; i <n-1; i++)
        {
            if(gcdStore[i]<gcdStore[i-1]) 
            {
                idx=i-1;
                ok=false;
                break;
            }
        }
        if(ok) cout<<"YES\n";
        else 
        {
            ok=false;
            ok=solve(idx);
            if(ok) 
            {
                cout<<"YES\n";
                continue;
            }
            ok=solve(idx+1);
            if(ok) 
            {
                cout<<"YES\n";
                continue;
            }
            ok=solve(idx+2);
            if(ok) 
            {
                cout<<"YES\n";
                continue;
            }
            cout<<"NO\n";
        }
    }
    
}
