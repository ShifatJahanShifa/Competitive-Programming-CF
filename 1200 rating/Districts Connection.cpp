#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int T;cin>>T;
	while(T--)
	{
	    int n;cin>>n;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        bool ok=true;
        map<int,int>mp;
        map<int,vector<int>>idx;
        int cur=v[0];
        for (int i = 0; i <n; i++)
        {
            if(cur!=v[i]) ok=false;
            mp[v[i]]++;
            idx[v[i]].push_back(i+1);
        }
        if(!ok) 
        {
            int cnt=60000,f1,f2;
            for(auto it:mp)
            {
                if(it.second<cnt) 
                {
                    cnt=it.second;
                    f1=it.first;
                }
            }
            cout<<"YES\n";
            if(cnt==1) 
            {
                int ind=idx[f1][0];
                for (int i = 1; i <=n; i++)
                {
                    if(i==ind) continue;
                    cout<<ind<<" "<<i<<"\n";
                }
                
            }
            else 
            {
                for(auto it:mp)
                {
                    if(it.first!=f1) 
                    {
                        f2=it.first;
                        break;
                    }
                }
                int idx1=idx[f1][0];
                int idx2=idx[f2][0];
                set<int>ind;
                ind.insert(idx2);
                for(auto c:idx[f1]) 
                {
                    ind.insert(c);
                }
                for (int i = 1; i <=n; i++)
                {
                    if(ind.count(i)) continue;
                    cout<<idx1<<" "<<i<<"\n";
                }
                // ind.erase(idx1);
                ind.erase(idx2);
                for (int i = 1; i <=n; i++)
                {
                    if(ind.count(i)) 
                    cout<<idx2<<" "<<i<<"\n";
                }
            }
        } 
        else cout<<"NO\n";
	}

}
