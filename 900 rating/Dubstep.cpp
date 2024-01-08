#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
    string s,ans="";cin>>s;
    vector<string>v;
    int n=s.size();
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='W') 
        {
            string temp="";
            temp+=s[i];
            int idx=min(n,(i+3));
            for (int j = i+1; j <idx; j++)
            {
                temp+=s[j];
            }
            if(temp=="WUB") 
            {
                if(ans!="") v.push_back(ans);
                ans="";
                i+=2;
                continue;
            }
        }
        ans+=s[i];
    }
    if(ans!="") v.push_back(ans);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    puts("");
}
