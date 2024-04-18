#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void print(int n,int v)
{
    for (int i = 1; i <=n; )
    {
        //cout<<i<<" ";
        for (int j = 0; j <v; j++)
        {
            cout<<i<<" ";
        }
        if(i==1) 
        {
            i+=v+1;
        }
        else i+=v; 
    }
    puts("");
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,x,y;cin>>n>>x>>y;
        if(x==0 and y==0) cout<<"-1\n";
        else if(x>0 and y>0) cout<<"-1\n";
        else
        {
            if(x==0) 
            {
                if((n-1)%y) 
                {
                    cout<<"-1\n";
                }
                else 
                {
                    print(n,y);
                }
            }
            else if(y==0) 
            {
                if((n-1)%x) 
                {
                    cout<<"-1\n";
                }
                else 
                {
                    print(n,x);
                }
            }
        }
    }
} 
