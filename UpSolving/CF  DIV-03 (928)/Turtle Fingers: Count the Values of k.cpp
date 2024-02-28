#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll a,b,l;cin>>a>>b>>l;
        int p=20,q=20;
        int cnt=0;

        // brute force
        set<ll>st;
        vector<ll>am(21,-1),bm(21,-1);
        ll val=1;
        am[0]=1,bm[0]=1;
        for (int i = 1; i <21; i++)
        {
            val*=a;
            if(val>l) break;
            am[i]=val;
        }
        val=1;
        for (int i = 1; i <21; i++)
        {
            val*=b;
            if(val>l) break;
            bm[i]=val;
        }

        for (int i = 0; i <p; i++)
        {
            if(am[i]==-1) break;
            for (int j = 0; j < q; j++)
            {
                if(bm[j]==-1) break;
                
                ll calc=am[i]*bm[j];
                if(calc>l) break; 
                //cout<<calc<<" uff\n";
                if(l%calc==0) 
                {
                    st.insert((l/calc));
                }
            }
        }
        cout<<st.size()<<"\n";
    }
}
