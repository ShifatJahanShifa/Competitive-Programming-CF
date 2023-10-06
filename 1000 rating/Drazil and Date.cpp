#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,s,sum;cin>>a>>b>>s;
    sum=abs(a)+abs(b);
    
    if(sum>s) puts("NO");
    else if(sum==s) puts("YES");
    else 
    {
        if((s-sum)%2==0) puts("YES");
        else puts("NO");
    }
}
