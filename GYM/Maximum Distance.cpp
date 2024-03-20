#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<int>a(n),b(n);
        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;
        vector<int>cnt(2*n-1);
        for (int i = 0; i <n; i++)
        {
            for (int j = 0; j<n; j++)
            {
                if(a[i]!=b[j]) 
                {
                    int temp=i-j+n-1;
                    cnt[temp]++;
                }
            }
        }
        int ans=*max_element(cnt.begin(),cnt.end());
        cout<<ans<<"\n";
    }
}
