#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int Size=1e7+2;
vector<int>arr(Size,1);

void sieve()
{
    int root=sqrt(Size);
    arr[0]=0;
    arr[1]=0;
    for (int i = 2; i <=root; i++)
    {
        if(arr[i]) 
        {
            for (int j = i+i; j<Size; j+=i)
            {
                arr[j]=0;
            }
        }
    }
}

int main()
{
    sieve();
    int T;cin>>T;
    while (T--)
    {
        int l,r;cin>>l>>r;
        if(l<=3 and r<=3) cout<<"-1\n";
        else if(l!=r) 
        {
            l=r-r%2;
            cout<<(l>>1)<<" "<<(l>>1)<<"\n";
        }
        else 
        {
            if(arr[l]) cout<<"-1\n";
            else 
            {
                for (int i = 2; i <l; i++)
                {
                    if(__gcd(i,l)!=1) 
                    {
                        cout<<i<<" "<<l-i<<"\n";
                        break;
                    }
                }
                
            }
        }
    }
    
}
