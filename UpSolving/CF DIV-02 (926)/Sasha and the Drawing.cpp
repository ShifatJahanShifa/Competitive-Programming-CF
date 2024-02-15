#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n>>k;
        int div=(k+1)>>1;
        if(((n*4)-2)==k) div++;
        cout<<div<<"\n";
    }   
}
