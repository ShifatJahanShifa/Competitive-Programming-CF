#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
    int n,a,b;cin>>n>>a>>b;
    int ans=0;
    if((a+b)>=n)
        ans=n-a;
    else ans=b+1;
    cout<<ans<<"\n";
}
