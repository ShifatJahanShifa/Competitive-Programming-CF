#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        string s;cin>>s;
        bool zero=false,one=false;
        if(n==2) 
        {
            if(s[0]=='0' and s[1]=='0') cout<<"0\n";
            else if(s[0]=='0') cout<<s[1]<<"\n";
            else
            cout<<s<<"\n";
            continue;
        }
        for (int i = 0; i <n; i++)
        {
            zero|=(s[i]=='0');
            one|=(s[i]=='1');
        }
        if(zero) 
        {
            if(s[1]=='0' and n==3) 
            {
                // cout<<"djsh\n";
                if(s[0]=='0' or s[2]=='0') cout<<"0\n";
                else if(s[2]=='1' or s[0]=='1')
                cout<<(s[0]-'0')*(s[2]-'0')<<"\n";
                else 
                cout<<(s[0]-'0')+(s[2]-'0')<<"\n";
            }
            else 
            {
                cout<<"0\n";
            }
        }
        else 
        {
            int mini=100,l;
            vector<int>m,pos;
            for (int i = 0; i <n-1; i++)
            {
                int temp=(s[i]-'0');
                temp*=10;
                temp+=(s[i+1]-'0');
                m.push_back(temp);
                pos.push_back(i);
            }
            int ans=INT_MAX;
            for (int i = 0; i <m.size(); i++)
            {
                int temp=m[i];
                // cout<<m.size()<<" "<<pos[i]<<"\n";
                for (int j = 0; j <n; j++)
                {
                    if(j==pos[i]) 
                    {
                        j++; continue;
                    }
                    if(s[j]!='1') temp+=(s[j]-'0');
                }
                ans=min(ans,temp);
            }
            cout<<ans<<"\n";
        }
    }
    
}


