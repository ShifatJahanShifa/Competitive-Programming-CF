#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
    int n,m;cin>>n;
    int cntf=0,cntz=0;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    for (int i = 0; i <n; i++)
    {
        if(v[i]==0) cntz++;
        else cntf++;
    }
    if(!cntz) cout<<"-1\n";
    else 
    {
        int temp=cntf/9;
        if(temp) 
        {
            temp*=9;
            for (int i = 0; i <temp; i++)
            {
                cout<<"5";
            }
            for (int i = 0; i <cntz; i++)
            {
                cout<<"0";
            }
            puts("");
        }
        else 
        {
            cout<<"0\n";
        }
    }
}
