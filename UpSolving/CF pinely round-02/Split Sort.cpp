#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, a, q;
        cin >> n ;
        vector<int>v(n);
        set<int>st;
        for(auto &it:v) cin>>it;
        int ans=0;
        for (int i = 0; i <n; i++)
        {
            st.insert(v[i]);
            if(st.count((v[i]+1))) ans++;
        }
        cout<<ans<<"\n";
    }
}
