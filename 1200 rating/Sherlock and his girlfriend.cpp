#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long MOD=1e9+7;
vector<int>SPF(100005);

void sieve2(int n) 
{
    SPF.clear();
    for (int i = 2; i <=n; i++)
    {
        SPF[i]=i;
    }
    for (int i = 2; i*i<=n; i++)
    {
        if(SPF[i]!=i) continue;
        for (int j =i*i; j <=n; j+=i)
        {
            if(SPF[j]!=j) continue;
            SPF[j]=i;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    if(n==1) 
    {
        cout<<"1\n1\n";
        return 0;
    }
    n++;
    sieve2(n);
    if(n>3)
    cout<<"2\n";
    else cout<<"1\n";
    for (int i = 2; i <=n; i++)
    {
        if(SPF[i]==i) cout<<1<<" ";
        else cout<<2<<" ";
    }
    cout<<"\n";
}
