#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n; cin>>n;
        string s;cin>>s;
        map<char,int>mp;
        set<char>st;
        for (int i = 0; i <n; i++)
        {
            mp[s[i]]++;
            st.insert(s[i]);
        }
        
        string ans="";
        int cnt=0;
        while (cnt!=n)
        {
            for(auto it:mp)
            {
                if(it.second!=0)
                {
                    ans.push_back(it.first);
                    mp[it.first]--;
                    cnt++;
                }
            }
        }
        
        cout<<ans<<"\n";
    }
    
}
