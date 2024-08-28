#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n;
        string s;cin>>s;
        int i=0,j=n-1; 
        if(n&1) cout<<"-1\n";
        else 
        {
            int cnt1=0,cnt0=0;
            for (int i = 0; i <n; i++)
            {
                if(s[i]=='0') cnt0++;
                else cnt1++;
            }
            if(cnt0!=cnt1) cout<<"-1\n";
            else 
            {
                vector<int>idx;
                deque<char>dq;
                for (int i = 0; i <n; i++)
                {
                    dq.push_back(s[i]);
                }
                int d=0;
                while (!dq.empty())
                {
                    if(dq.front()==dq.back()) 
                    {
                        if(dq.front()=='1') 
                        {
                            dq.push_front('1');
                            dq.push_front('0');
                            idx.push_back(0+d);
                        }
                        else 
                        {
                            dq.push_back('0');
                            dq.push_back('1');
                            idx.push_back(n-d);
                        }
                        n+=2;
                    }
                    else 
                    {
                        dq.pop_front();
                        dq.pop_back();
                        d++;
                    }
                }
                cout<<idx.size()<<"\n";
                for (int i = 0; i <idx.size(); i++)
                {
                    cout<<idx[i]<<" ";
                }
                puts("");
            }
        }
        
    }
}


//  4 3 5 3 4 5
