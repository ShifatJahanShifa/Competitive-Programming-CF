problem link: https://codeforces.com/problemset/problem/219/A

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;cin>>k;
    string s;cin>>s;
    multiset<char>mst(s.begin(),s.end());
    set<char>st(s.begin(),s.end());
    bool ok=false;
    int cnt=0;
    for(auto it=mst.begin();it!=mst.end();it++)
    {
        cnt=mst.count(*it);
        if(cnt%k) 
        {
            ok=true;
            break;
        }
    }
    if(ok) puts("-1");
    else 
    {
        string res="",temp="";
        for(auto it=st.begin();it!=st.end();it++)
        {
            cnt=mst.count(*it);
            cnt/=k;
            for (int i = 0; i < cnt; i++)
            {
                temp+=*it;
            }
        }
        res=temp;
        for (int i = 1; i <k; i++)
        {
            res+=temp;
        }
        cout<<res<<"\n";
    }
}
