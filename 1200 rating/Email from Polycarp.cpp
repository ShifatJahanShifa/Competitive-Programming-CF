#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        string s,f;cin>>f>>s;
        vector<pair<char,int>>vps,vpf;
        // for f
        for (int i = 0; i<f.size(); i++)
        {
            char prev=f[i];
            int cnt=1;
            for(i++;i<f.size();i++)
            {
                if(f[i]==prev) 
                {
                    cnt++;
                }
                else 
                {
                    i--;
                    break;
                }
            }
            vpf.push_back(make_pair(prev,cnt));
        }
        // for s
        for (int i = 0; i<s.size(); i++)
        {
            char prev=s[i];
            int cnt=1;
            for(i++;i<s.size();i++)
            {
                if(s[i]==prev) 
                {
                    cnt++;
                }
                else 
                {
                    i--;
                    break;
                }
            }
            vps.push_back(make_pair(prev,cnt));
        }

        if(vps.size()!=vpf.size()) cout<<"NO\n";
        else 
        {
            bool ok=true;
            for (int i = 0; i <vpf.size(); i++)
            {
                auto it1=vpf[i];
                auto it2=vps[i];
                if(it1.first!=it2.first) 
                {
                    ok=false;
                    break;
                }
                else if(it1.second>it2.second) 
                {
                    ok=false;
                    break;
                }
            }
            ok ? cout<<"YES\n": cout<<"NO\n";
        }
    }
}
