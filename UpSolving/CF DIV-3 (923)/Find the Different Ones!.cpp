#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,q;cin>>n;
        vector<int>v(n),pre(n+1,0);
        for(auto &it:v) cin>>it;
        set<int>st;
        pre[1]=1;
        for (int i = 1; i <n; i++)
        {
            if(v[i]!=v[i-1] )
            {
                pre[i+1]=pre[i]+1;
                st.insert(v[i]);
            }
            else 
            {
                pre[i+1]=pre[i];
            }
        }
        int l,r;
        cin>>q;
        //cout<<"ans\n";
        while (q--)
        {
            cin>>l>>r;
            if(pre[l]==pre[r]) cout<<"-1 -1\n";
            else 
            {
                int pos=upper_bound(pre.begin()+l,pre.begin()+r,pre[l])-pre.begin();
                cout<<l<<" "<<pos<<"\n";
            }
        }
        
    }
}
