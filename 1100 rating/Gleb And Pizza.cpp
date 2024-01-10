#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    double r,d;
    int n;
    cin >> r>>d>>n;
    int ans=0;
    double x,y,r1;
    while (n--)
    {
        cin>>x>>y>>r1;
        double dis=sqrt((x*x)+(y*y));
        dis+=r1;
        if(dis>r) continue;
        double d2=r-d;
        double d1=dis-(r1*2);
        if(d1<d2) continue;
        ans++;
    }
    cout<<ans<<"\n";
    
}
