#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<vector<ll>>a(3,vector<ll>(n+1,0));
        vector<int>perm{0,1,2};
        for (int i = 1; i <=n; i++)
        {
            cin>>a[0][i];
            a[0][i]+=a[0][i-1];
        }
        for (int i = 1; i <=n; i++)
        {
            cin>>a[1][i];
            a[1][i]+=a[1][i-1];
        }
        ll tot=0;
        for (int i = 1; i <=n; i++)
        {
            cin>>a[2][i];
            tot+=a[2][i];
            a[2][i]+=a[2][i-1];
        }
        pair<int,int>ans[3];
        ll tip=tot/3;
        if(tot%3) tip++;
        int aa=-1,bb=-1,cc=-1,dd=-1,ee=-1,ff=-1;
        bool got=false;
        do
        {
            aa=1;
            bb=lower_bound(a[perm[0]].begin(),a[perm[0]].end(),tip)-a[perm[0]].begin();
            int k=bb+1;
            cc=k;
            while (k<=n)
            {
                if((a[perm[1]][k]-a[perm[1]][bb])>=tip) 
                {
                    dd=k;
                    break;
                }
                k++;
            }
            if(k>n) continue;
            k++;
            ee=k;
            while (k<=n)
            {
                if((a[perm[2]][k]-a[perm[2]][dd])>=tip) 
                {
                    ff=k;
                    break;
                }
                k++;
            }
            if(k>n) continue;
            ans[perm[0]]=make_pair(aa,bb);
            ans[perm[1]]=make_pair(cc,dd);
            ans[perm[2]]=make_pair(ee,ff);
            got=true;
            break;
        } while (next_permutation(perm.begin(),perm.end()));
        
        if(got) cout<<ans[0].first<<" "<<ans[0].second<<" "<<ans[1].first<<" "<<ans[1].second<<" "<<ans[2].first<<" "<<ans[2].second<<"\n";
        if(!got) cout<<"-1\n";
    }
}


