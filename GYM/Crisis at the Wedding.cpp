#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
const ll mod=1000000007;

int main()
{
    int n; cin>>n;
    vector<ll>v(n),an(n);
    for(auto &it:v) cin>>it;
    an=v;
    ll sum=0; ll mx=0;
    int idx=0;
    for (int i = 0; i <n; i++)
    {
        sum+=v[i];
        if(v[i]>mx) 
        {
            idx=i, mx=v[i];
        }
    }
    ll each=sum/n;
    ll ans=LLONG_MAX,temp=0,add=0;
    // clockwise
    bool ok=false;
    while (1)
    {
        // cout<<"hjshg\n";
        ok=false;
        for (int i = idx; i <n; i++)
        {
            an[i]+=add;
            if(an[i]>each) 
            {
                temp+=(an[i]-each);
                add=(an[i]-each);
                an[i]=each;
                ok=true;
            }
            else add=0;
        }
        for (int i = 0; i <idx; i++)
        {
            an[i]+=add;
            if(an[i]>each) 
            {
                temp+=(an[i]-each);
                add=(an[i]-each);
                an[i]=each;
                ok=true;
            }
            else add=0;
        }
        if(!ok) break;
    }
    ans=min(ans,temp);
    temp=0,add=0;
    //anticlockwise
    an=v;
    while (1)
    {
        ok=false;
        for (int i = idx; i>-1; i--)
        {
            an[i]+=add;
            if(an[i]>each) 
            {
                temp+=(an[i]-each);
                add=(an[i]-each);
                an[i]=each;
                ok=true;
            }
            else add=0;
        }
        for (int i = n-1; i>idx; i--)
        {
            an[i]+=add;
            if(an[i]>each) 
            {
                temp+=(an[i]-each);
                add=(an[i]-each);
                an[i]=each;
                ok=true;
            }
            else add=0;
        }
        if(!ok) break;
    }
    ans=min(ans,temp);
    cout<<ans<<"\n";
}
