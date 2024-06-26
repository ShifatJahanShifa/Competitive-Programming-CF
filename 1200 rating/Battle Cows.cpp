#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n>>k;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        int ans=0;
        if(k==1) 
        {
            for (int i = k; i < n; i++)
            {
                if(v[i]<v[k-1]) ans++;
                else break;
            }
            cout<<ans<<"\n";
        }
        else 
        {
            int big=0,pos1=0,pos2=0;
            int val=v[k-1];
            for (int i = 0; i <k-1; i++)
            {
                if(v[i]>v[k-1]) 
                {
                    big++;
                    if(big==1) pos1=i+1;
                    if(big==2) 
                    {
                        pos2=i+1;
                        break;
                    }
                }
            }
            if(big==0) 
            {
                swap(v[0],v[k-1]);
            }
            else if(big==1) 
            {
                int dis1=pos1-1-1;
                int dis2=k-pos1;
                if(dis1>=dis2) 
                {
                    swap(v[0],v[k-1]);
                }
                else swap(v[pos1-1],v[k-1]);
            }
            else if(big==2)
            {
                int dis1=pos1-1-1;
                int dis2=pos2-pos1;
                if(dis1>=dis2) 
                {
                    swap(v[0],v[k-1]);
                }
                else swap(v[pos1-1],v[k-1]);
            }
            int j=0;
            for (int i = 0; i < n; i++)
            {
                if(v[i]==val) 
                {
                    if(i)
                    ans++;
                    j=i;
                    break;
                }
            }
            for (int i = j+1; i < n; i++)
            {
                if(v[i]<val) 
                {
                    ans++;
                }
                else break;
            }
            // for (int i = 0; i < n; i++)
            // {
            //     cout<<v[i]<<" \n"[i==n-1];
            // }
            cout<<ans<<"\n";
        }
    }   
}
