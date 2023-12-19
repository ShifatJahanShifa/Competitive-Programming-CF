#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        string s,res="";cin>>s;
        queue<int>u,l;
        int front;
        for (int i = s.size()-1;i>-1; i--)
        {
            if(s[i]=='B') 
            {
                u.push(i);
            }
            else if(s[i]=='b') 
            {
                l.push(i);
            }
            else if(s[i]>='A' and s[i]<='Z') 
            {
                if(!u.empty())
                {    
                    front=u.front();
                    if(front>i) 
                    {
                        u.pop();
                    }
                    else res+=s[i];
                }
                else res+=s[i];
            }
            else 
            {
                if(!l.empty())
                {    
                    front=l.front();
                    if(front>i) 
                    {
                        l.pop();
                    }
                    else res+=s[i];
                }
                else res+=s[i];
            }
        }
        reverse(res.begin(),res.end());
        cout<<res<<"\n";
    }
}
