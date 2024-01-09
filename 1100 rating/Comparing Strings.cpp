#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int d = 110;
int m, n;
string s[d];

int main()
{
    string s1,s2;cin>>s1>>s2;
    int idx1,idx2=-1,n1,n2; 
    n1=s1.size(),n2=s2.size();
    if(n1!=n2) puts("NO");
    else 
    {
        for (int i = 0; i <n1; i++)
        {
            if(s1[i]!=s2[i]) 
            {
                idx1=i;
                break;
            }
        }
        for (int i = idx1+1; i <n1; i++)
        {
            if(s1[i]==s2[idx1] and s2[i]==s1[idx1]) 
            {
                idx2=i;
                break;
            }
        }
        if(idx2==-1) puts("NO");
        else 
        {
            s1[idx1]=s2[idx1];
            s1[idx2]=s2[idx2];
            s1==s2 ? cout<<"YES\n" : cout<<"NO\n";
        }
    }
}
