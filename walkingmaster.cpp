#include <bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin >> t;
     while (t--)
     {
          long long a,b,c,d;
          cin>>a>>b>>c>>d; 

          if(b>d) puts("-1");
          else if(a<(c-(d-b))) puts("-1");
          else cout<<a-(c-d+b)+d-b<<"\n";
     }
}