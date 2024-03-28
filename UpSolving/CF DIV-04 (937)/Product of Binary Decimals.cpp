#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    vector<vector<string>>vd(5);
    string s="10",s1="11";
    vd[0].push_back(s);
    vd[0].push_back(s1);
    for (int i = 1; i <5; i++)
    {
        for(auto it:vd[i-1]) 
        {
            it+='0';
            vd[i].push_back(it);
            it.pop_back();
            it+='1';
            vd[i].push_back(it);
        }
    }
    vector<int>f;
    for (int i = 0; i <5; i++)
    {
        for(auto it:vd[i]) 
        {
            f.push_back(stoi(it));
        }
    }
    while (T--)
    {
        int n;cin>>n;
        bool ok=true;
        reverse(f.begin(),f.end());
        
        while (n>1)
        {
            ok=true;
            for (int i = 0; i <f.size(); i++)
            {
                if(n%f[i]==0) 
                {
                    ok=false;
                    n/=f[i];
                }
            }
            if(ok) break;
        }
        if(n==1) ok=false;
        ok ? cout<<"NO\n" : cout<<"YES\n";
    }
    
    
}
