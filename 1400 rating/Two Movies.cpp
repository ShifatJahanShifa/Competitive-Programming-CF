#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>a(n),b(n);
        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;
        int rata=0,ratb=0,mnus=0,plus=0;
        for (int i = 0; i <n; i++)
        {
            if(a[i]==b[i] and a[i]==-1) 
            {
                mnus++;
            }
            else if(a[i]==b[i] and a[i]==1)
            {
                plus++;
            }
            else if(a[i]==b[i] and a[i]==0) {}
            else if(a[i]==1) 
            {
                rata++;
            }
            else if(b[i]==1)
            {
                ratb++;
            }
        }
        if(plus) 
        {
            int dif=abs(rata-ratb);
            int take=min(dif,plus);
            plus-=take;
            if(rata>ratb) 
            {
                ratb+=take;

            }
            else if(rata<ratb)
            {
                rata+=take;
            }
            if(plus) 
            {
                rata+=(plus/2);
                ratb+=(plus/2);
                if(plus&1) 
                {
                    if(rata==ratb) rata++;
                    else if(rata<ratb) rata++;
                    else ratb++;
                }
            }
        }
        // cout<<rata<<" "<<ratb<<"\n";
        if(mnus)
        {
            int dif=abs(rata-ratb);
            int take=min(dif,mnus);
            mnus-=take;
            if(rata>ratb) 
            {
                rata-=take;
                // cout<<" here rn\n";
            }
            else if(rata<ratb)
            {
                ratb-=take;
            }
            if(mnus) 
            {
                rata-=(mnus/2);
                ratb-=(mnus/2);
                if(mnus&1) 
                {
                    if(rata==ratb) rata--;
                    else if(rata<ratb) ratb--;
                    else rata--;
                }
            }
        }
        cout<<min(rata,ratb)<<"\n";
    }
}

 
