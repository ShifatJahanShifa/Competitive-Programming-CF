#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n>>k;
        vector<int>a(n),b(n),prefix(n),maxim(n);
        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;
        int ans=0;
        ans+=a[0];
        prefix[0]=a[0];
        maxim[0]=b[0];
        int cnt=min(n,k);
        for (int i =1; i <n; i++)
        {
            prefix[i]=prefix[i-1]+a[i];
            maxim[i]=max(maxim[i-1],b[i]);
        }
        for (int i = 1; i <=cnt; i++)
        {
            int option1=prefix[i-1];
            int left=k-i;
            int option2=left*maxim[i-1];
            option1+=option2;
            ans=max(ans,option1);
        }
        if(cnt!=k) 
        {

        }
        cout<<ans<<"\n";
    }   
}
