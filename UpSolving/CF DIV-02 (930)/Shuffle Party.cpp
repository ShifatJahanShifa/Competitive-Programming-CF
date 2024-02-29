#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    vector<ll>twop(32);
    for (int i = 0; i <32; i++)
    {
        twop[i]=(1<<i);
    }
    
    while (T--)
    {
        ll n;
        cin >> n;
        int pos=lower_bound(twop.begin(),twop.end(),n)-twop.begin();
        if(twop[pos]==n)
        cout<<twop[pos]<<"\n";
        else cout<<twop[pos-1]<<"\n";
    }
}
