#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n;
        string a,b;cin>>a>>b;
        vector<int>len;
        for (int i = 1; i <n; i++)
        {
            if(a[0]!=a[i]) 
            {
                len.push_back(i);
                a[0]=a[i];
            }
        }
        for (int i = n-1; i>-1; i--)
        {
            if(b[i]!=a[0]) 
            {
                len.push_back(i+1);
                a[0]=b[i];
            }
        }
        cout<<len.size()<<" ";
        for (int i = 0; i <len.size(); i++)
        {
            cout<<len[i]<<" ";
        }
        cout<<"\n";
    }
} 
