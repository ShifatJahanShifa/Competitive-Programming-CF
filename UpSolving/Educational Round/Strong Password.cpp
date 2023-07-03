#include<bits/stdc++.h> 
using namespace std; 

int main()
{
    int T;scanf("%d",&T); 
    while(T--)
    {
        string s;cin>>s;
        int m;cin>>m;
        string l,r;
        cin>>l;
        cin>>r;
        int li,ri,n=s.size();
        int right=0,pos=0;
        for (int i = 0; i <m; i++)
        {
            li=l[i]-'0';
            ri=r[i]-'0';
            for (int j =li; j <=ri; j++)
            {
                int k=pos;
                for ( ; k <n; k++)
                {
                    if((s[k]-'0')==j) 
                    {
                        break;
                    }
                }
                right=max(right,k);
            }
            if(right>=n) 
            {
                puts("YES");
                break;
            }
            pos=right+1;
        }
        if(right<n) puts("NO");
    }
}
