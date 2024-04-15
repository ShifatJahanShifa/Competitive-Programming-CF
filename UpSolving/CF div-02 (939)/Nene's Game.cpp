#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz=2e5+5;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int k,q;cin>>k>>q;
        int val,mini=1000;
        for (int i = 0; i <k; i++)
        {
            cin>>val;
            mini=min(mini,val);
        }
        mini--;
        for (int i = 0; i <q; i++)
        {
            cin>>val;
            cout<<min(mini,val)<<" \n"[i==q-1];
        }
    }
    
}
