#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m,k;cin>>n>>m>>k;
        string s;cin>>s;
        int shore=n+1;
        int cur=-1,l=-1;
        bool reachable=false;
        while (1)
        {
            int estimate=min(shore,m);
            cur+=estimate;
            if(cur>=n) 
            {
                reachable=true;
                break;
            }
            bool got=false;
            for (int i = cur; i>l; i--)
            {
                if(s[i]=='L') 
                {
                    got=true;
                    l=i;
                    break;
                }
            }
            if(got) 
            {
                cur=l;
                for (int i = l+1; i<n; i++)
                {
                    if(s[i]!='L') 
                    {
                        break;
                    }
                    l++;
                    cur++;
                }

                shore=n-cur;
                // cout<<shore<<" s "<<cur<<" c "<<l<<"\n";
            }
            else 
            {
                bool done=false;
                // cout<<cur<<" d\n";
                for (int i = cur; i <n; i++)
                {
                    // cout<<k<<" "<<"show\n";
                    if(s[i]=='W') k--,cur++,l++;
                    else if(s[i]=='C') 
                    {
                        done=true;
                        break;
                    }
                    else if(s[i]=='L') 
                    {
                        l=i;
                        cur=i;
                        break;
                    }
                    // cout<<k<<" "<<"show\n";

                    if(k<0) 
                    {
                        // cout<<"dgf\n";
                        done=true;
                        break;
                    }
                }
                if(done) break;
                for (int i = cur+1; i <n; i++)
                {
                    if(s[i]!='L') 
                    {
                        break;
                    } 
                    cur++;
                    l++;
                }
                shore=n-cur;
            }
        }
        reachable ? cout<<"YES\n":cout<<"NO\n";
    }
    
}


