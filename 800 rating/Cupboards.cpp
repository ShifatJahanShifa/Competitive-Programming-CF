#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;cin>>T;
    int l,r;
    int lo=0,lz=0,ro=0,rz=0;
    while (T--)
    {
        cin>>l>>r;
        if(l) lo++;
        else lz++;
        if(r) ro++;
        else rz++;
    }
    int ans=INT_MAX;
    //first
    ans=min(ans,lo+rz);
    //second
    ans=min(ans,lz+ro);
    ans=min(ans,lo+ro);
    ans=min(ans,lz+rz);
    cout<<ans<<"\n";
}
