#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;cin>>n;
    vector<int>v(n+1);
    for (int i = 1; i <=n; i++)
    {
        cin>>v[i];
    }
    int coverage=n+1;int cnt=0;
    for (int i = n; i>0; i--)
    {
        int val=v[i];
        int st=i-val;
        if(i<coverage) cnt++;
        coverage=min(coverage,st);
    }
    cout<<cnt<<"\n";
}
