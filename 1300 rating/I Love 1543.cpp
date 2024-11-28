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
        int n,m; cin>>n>>m;
        int arr[n][m];
        int s=min(n,m)/2;
        vector<vector<int>>v(s,vector<int>());
        string str;
        for (int i = 0; i <n; i++)
        {
            cin>>str;
            for (int j = 0; j<m; j++)
            {
                arr[i][j]=str[j]-'0';
            }
        }

        // main template to get circular stripe from grid problem 
        for (int k = 0; k<s; k++)
        {
            for (int j= k; j<m-k; j++)
            {
                v[k].push_back(arr[k][j]);
            }
            for (int i=k+1; i<n-1-k; i++)
            {
                v[k].push_back(arr[i][m-1-k]);
            }
            
            for (int j= m-1-k; j>=k; j--)
            {
                v[k].push_back(arr[n-1-k][j]);
            }
            for (int i= n-2-k; i>k; i--)
            {
                v[k].push_back(arr[i][k]);
            }
        }
        
        int ans=0;
        for (int i = 0; i <s; i++)
        {
            bool ok=false;
            for (int j= 0;j<v[i].size(); j++)
            {
                if((j+3)<v[i].size()) 
                {
                    if(v[i][j]==1 and v[i][j+1]==5 and v[i][j+2]==4 and v[i][j+3]==3) 
                    {
                        j+=3;
                        ans++;
                    }
                }
                else 
                {
                    vector<int>temp;
                    for (int k = j; k <v[i].size(); k++)
                    {
                        temp.push_back(v[i][k]);
                    }
                    int mini=min(v[i].size(),(4-temp.size()));
                    for(int k=0;k<mini;k++) 
                    {
                        temp.push_back(v[i][k]);
                    }
                    if(temp.size()==4) 
                    {
                        if(temp[0]==1 and temp[1]==5 and temp[2]==4 and temp[3]==3) 
                        {
                            ans++;
                        }
                    }
                }

            }
            
        }
        
        cout<<ans<<"\n";
    }
    
}

// 0011001
