#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sz=2e5+5;
vector<vector<int>>divi(200005);

void divisor()
{
    for (int i = 2; i < sz; i++)
    {
        //divi[i].push_back(1);
        for (int j = i; j <sz; j+=i)
        {
            divi[j].push_back(i);
        }
    }
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n; string s; cin>>n>>s;
        for (int i = 1; i <=n; i++)
        {
            if(n%i==0) 
            {
                int mismatch=0;
                for (int j =0; j <i; j++)
                {
                    for (int k = i+j; k <n; k+=i)
                    {
                        if(s[j]!=s[k]) mismatch++;
                    }
                    
                }
                if(mismatch<=1) {
                    cout<<i<<"\n";
                    break;
                }
                mismatch=0;
                //cout<<"hello\n";
                for (int j =n-1; j>=n-i; j--)
                {
                    for (int k =j-i; k>-1; k-=i)
                    {
                        if(s[j]!=s[k]) mismatch++;
                    }
                    
                }
                if(mismatch<=1) {
                    cout<<i<<"\n";
                    break;
                }
                
            }
        }
        
        
    }
    
} 

// oo1  110
