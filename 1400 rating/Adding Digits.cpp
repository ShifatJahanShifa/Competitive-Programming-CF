#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() // bs
{
    int a,b,n;cin>>a>>b>>n;
    bool ok=false;
    string s;
    for (int i = 0; i <10; i++)
    {
        s=to_string(a);
        s+='0'+i;
        int v=stoi(s);
        if(v%b==0) 
        {
            ok=true;
            break;
        }
    }
    if(ok) 
    {
        for (int i = 1; i <n; i++)
        {
            s+='0';
        }
        cout<<s<<"\n";
    }
    else cout<<"-1\n";
}
