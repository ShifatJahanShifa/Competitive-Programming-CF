#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;int n;
    cin>>s>>n;
    map<char,int>mp,tobeDeleted;
    for (int i = 0; i <s.size(); i++)
    {
        mp[s[i]]++;
    }
    vector<pair<char,int>>vp;
    for(auto it:mp)  
    {
        vp.push_back(make_pair(it.first,it.second));
    }
    sort(vp.begin(),vp.end(),[&](pair<char,int> p,pair<char,int> q){
        return p.second<q.second;
    });
    for (int i = 0; i <vp.size(); i++)
    {
        auto it=vp[i];
        int mini=min(it.second,n);
        tobeDeleted[it.first]=mini;
        n-=mini;
        if(n==0) break;
    }
    if(n) cout<<"0\n"<<"\n";
    else 
    {
        string ans="";
        for (int i = 0; i <s.size(); i++)
        {
            if(tobeDeleted[s[i]]!=0) 
            {
                tobeDeleted[s[i]]--;
            }
            else ans+=s[i];
        }
        set<char>st(ans.begin(),ans.end());
        cout<<st.size()<<"\n";
        cout<<ans<<"\n";
    }
}
