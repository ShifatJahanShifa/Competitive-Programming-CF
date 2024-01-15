#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,k,x;
        cin >> n>>k>>x;
        vector<int> v(n),prefix(n+1,0);
        for(auto &it:v) cin>>it;
        sort(v.begin(),v.end());
        int ans=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            prefix[i+1]=prefix[i]+v[i];
        }
        int f,s;
        for (int i = k; i >-1; i--)
        {
            f=n-i; 
            if(f<=x) ans=max(ans,(-1*prefix[f]));
            else 
            {
                s=f-x;
                int temp=prefix[s]-prefix[f]+prefix[s];
                ans=max(ans,temp);
            }
        }
        cout << ans << "\n";
    }
}
