#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,q;
        cin >> n>>q;
        vector<int> v(n),prefix(n+1,0);
        for(auto &it:v) cin>>it;
        sort(v.begin(),v.end(),greater<>());
        for (int i = 0; i < n; i++)
        {
            prefix[i+1]=prefix[i]+v[i];
        }
        int val;
        while (q--)
        {
            cin>>val;
            int pos=lower_bound(prefix.begin(),prefix.end(),val)-prefix.begin();
            if(pos>n) pos=-1;
            cout<<pos<<"\n";
        }
    }
}
