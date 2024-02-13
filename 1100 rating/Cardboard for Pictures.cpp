#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maxi;

int good(vector<ll>&v,ll val,ll c)
{
    val*=2LL;
    // ll srt=sqrt(c);

    // if((val+maxi)>srt) return 1;
    ll sum=0,temp;
    for (int i = 0; i <v.size(); i++)
    {
        temp=v[i];
        temp+=val;
        temp*=temp;
        sum+=temp;
        if(sum>c) return 1;
    }
    //cout<<sum<<"\n";
    if(sum==c) return 0;
    else if(sum<c) return -1;
    return 1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n; ll c;
        cin >> n>>c;
        vector<ll> v(n);
        for (auto &it : v)
            cin >> it; 
        sort(v.begin(),v.end());
        maxi=v[n-1];
        ll l=0,r=1e9,mid;
        int rt;
        while (l<=r)
        {
            mid=l+(r-l)/2LL;
            rt=good(v,mid,c);
            if(rt==0) break;
            if(rt==-1) l=mid+1LL;
            else r=mid-1LL;
            //cout<<l<<" "<<r<<" "<<mid<<"\n";
        }
        cout<<mid<<"\n";
    }
}
