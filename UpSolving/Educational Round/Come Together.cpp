#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        int h=0,v=0;

        if(!((a1>b1 and a1<c1) or (a1<b1 and a1>c1))) 
        {
            b1=abs(a1-b1);
            c1=abs(a1-c1);
            h=min(b1,c1);
        }
        if(!((a2>b2 and a2<c2) or (a2<b2 and a2>c2))) 
        {
            b2=abs(a2-b2);
            c2=abs(a2-c2);
            v=min(b2,c2);
        }
        h++;
        cout<<h+v<<"\n";
    }
}
