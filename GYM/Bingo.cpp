#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,k;cin>>n>>k;
    int highest=(n*n)-n;
    if(n==2 and k>1) cout<<"NO\n";
    else if(k>highest) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        char arr[n][n];

        // for odd
        if(n&1)
        {
            for (int i = 0; i <n; i++)
            {
                for (int j = 0; j <n; j++)
                {
                    arr[i][j]='#';
                }
            }
            int l=n-1;
            for (int i = 0; i <n; i++)
            {
                arr[i][l]='.';
                l--;
            }
            
            int dot=highest-k;
            for (int i = 0; i <n; i++)
            {
                for (int j = 0; j <n; j++)
                {
                    if(dot)
                    {
                        if(arr[i][j]=='#')
                        {
                            arr[i][j]='.';
                            dot--;
                        }
                    }
                }
            }
        }

        // for even
        else
        {
            if(n==2 and k==0) 
            {
                arr[0][0]='.';
                arr[0][1]='.';
                arr[1][0]='.';
                arr[1][1]='.';
            }
            else if(n==2 and k==1) 
            {
                arr[0][0]='#';
                arr[0][1]='.';
                arr[1][0]='.';
                arr[1][1]='.';
            }
            else 
            {
                for (int i = 0; i <n; i++)
                {
                    for (int j = 0; j <n; j++)
                    {
                        arr[i][j]='#';
                    }
                }
                int l=n-1;
                int a=n/2,b=n/2-1;
                for (int i = 0; i <n; i++)
                {
                    if(i==a)
                    {
                        arr[a][a]='.';
                        arr[i][l]='#';
                    }
                    else if(i==b)
                    {
                        arr[b][b]='.';
                        arr[i][l]='#';
                    }
                    else 
                    {
                        arr[i][l]='.';
                    }
                    l--;
                }
                
                int dot=highest-k;
                for (int i = 0; i <n; i++)
                {
                    for (int j = 0; j <n; j++)
                    {
                        if(dot)
                        {
                            if(arr[i][j]=='#')
                            {
                                arr[i][j]='.';
                                dot--;
                            }
                        }
                    }
                }
            }
        }
        
        for (int i = 0; i <n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j];
            }
            puts("");
        }
        
    }
}
