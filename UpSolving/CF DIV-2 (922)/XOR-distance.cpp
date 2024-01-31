#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int bit=63;

bool getBit(ll v,int s)
{
    return (v&(1LL<<s)); 
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll a, b, r,x=0LL;
        cin >> a >> b >> r;
        if(a>b) swap(a,b);
        bool isFirst=true;
        for (int i =bit-1 ; i>-1; i--)
        {
            bool aBit=getBit(a,i);
            bool bBit=getBit(b,i);
            if(aBit!=bBit) 
            {
                if(isFirst) 
                {
                    isFirst=false;
                }
                else 
                {
                    if(aBit==false and (x+(1LL<<i))<=r) 
                    {
                        a^=(1LL<<i);
                        b^=(1LL<<i);
                        x+=(1LL<<i);
                    }
                }
            }
        }
        cout<<b-a<<"\n";
    }
}
