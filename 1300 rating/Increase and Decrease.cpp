#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,v,ans=0;cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>v;
        ans+=v;
    }
    if(ans%n) cout<<n-1<<"\n";
    else cout<<n<<"\n";
}
