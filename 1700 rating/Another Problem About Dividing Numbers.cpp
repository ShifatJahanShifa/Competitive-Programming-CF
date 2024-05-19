#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int a,b,k;cin>>a>>b>>k;
        int sum=0;
        if(k==1) 
        {
            int gcd=__gcd(a,b);
            if((gcd==a or gcd==b) and a!=b) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else 
        {
            for (int i = 2; i*i <=a; i++)
            {
                while (a%i==0)
                {
                    a/=i;
                    sum++;
                }
                
            }
            if(a>1) sum++;
            for (int i = 2; i*i <=b; i++)
            {
                while (b%i==0)
                {
                    b/=i;
                    sum++;
                }
                
            }
            if(b>1) sum++;
            if(k<=sum) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
