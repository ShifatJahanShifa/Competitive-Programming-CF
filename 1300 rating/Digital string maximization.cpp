#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

// ll BE(ll a,ll b)
// {
//     ll ans=1LL;
//     while(b)
//     {
//         if(b%2LL) ans*=a;
//         ans%=mod;
//         a*=a;
//         a%=mod;
//         b/=2LL;
//     }
//     return ans;
// }  



int main()
{
    int T;cin>>T;
    while (T--)
    {
        string s; cin>>s;
        int n=s.size();
        int pos=-1,now=0;
        for (int i = 0; i <n; i++)
        {
            int val=s[i]-'0';
            if(val==9) continue;
            int till=8-val;
            int idx=min((i+till+1),n);
            int ex=val;
            pos=i;
            for (int j = i+1; j <idx; j++)
            {
                int val2=s[j]-'0';
                if(val2==0) continue;
                int kombe=val2-(j-i);
                if(kombe>ex) 
                {
                    ex=kombe;
                    pos=j;
                }
            }
            for (int j = pos; j>i; j--)
            {
                swap(s[j-1],s[j]);
            }
            s[i]=ex+'0';
        }
        cout<<s<<"\n";
    }
    
}

// 0011001
