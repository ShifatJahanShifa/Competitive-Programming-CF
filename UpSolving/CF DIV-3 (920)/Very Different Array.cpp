#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m; 
        cin>>n>>m;
        vector<ll>a(n),b(m);
        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int l2=0,r2=m-1,l1=0,r1=n-1;
        ll dif=0;
    	
        while(l1<=r1)
        {
            ll temp1=abs(a[l1]-b[r2]);
			ll temp2=abs(a[r1]-b[l2]);
			if(temp1<temp2) 
			{
				dif+=temp2;
				r1--,l2++;
			}
			else 
			{
				dif+=temp1;
				l1++,r2--;
			}
        }
        cout<<dif<<"\n";
    }
}
