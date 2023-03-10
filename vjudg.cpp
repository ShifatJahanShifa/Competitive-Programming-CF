#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a;
        int pos=0,neg=0;
        for (int i = 0; i <n; i++)
        {
            scanf("%d",&a);
            a>0 ? pos++: neg++;
        }

        /* for maximum */
        int temp=0;
        for (int i = 1; i <=n; i++)
        {
            i<=pos ? (cout<<i<<" " and temp++) : (temp-- and cout<<temp<<" ");
        }
        puts("");

        /* for minimum */
        int track=min(pos,neg);
        track*=2;
        temp=1;
        for (int i = 1; i <=n; i++)
        {
            i<=track ? (printf("1 0 ") and i++) : (cout<<temp<<" " and temp++);
        }
        puts("");
    }
}