#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;cin>>T;
    while(T--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int cnta=0,cntb=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A') cnta++;
            else cntb++;
        }
        if(cnta>cntb and s[n-1]=='A') puts("A");
        else if(cnta>cntb and s[n-1]=='B') puts("B");
        else if(cnta<cntb and s[n-1]=='B') puts("B");
        else if(cnta<cntb and s[n-1]=='A') puts("A");
        else if(cnta==cntb) cout<<s[n-1]<<"\n";
    }
}
