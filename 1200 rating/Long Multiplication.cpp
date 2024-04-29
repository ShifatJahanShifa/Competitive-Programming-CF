#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        string a,b;cin>>a>>b;
        bool ok=false;
        if(a<b) 
        {
            swap(a,b);
            ok=true;
        }
        //cout<<a<<" "<<b<<"\n";
        int stop=-1;
        for (int i = 0; i <a.size(); i++)
        {
            if(a[i]>b[i]) 
            {
                stop=i;
                break;
            }
        }
        
        for (int i = a.size()-1; i>stop; i--)
        {
            if(a[i]>b[i]) 
            {
                char temp=a[i];
                a[i]=b[i];
                b[i]=temp;
            }
        }
        ok ? cout<<b<<"\n"<<a<<"\n": cout<<a<<"\n"<<b<<"\n";
    }
} 
