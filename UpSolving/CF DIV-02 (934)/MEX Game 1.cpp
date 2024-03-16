#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n;
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;
        sort(v.begin(), v.end());
        if (v[0] != 0)    //case-01
        {
            cout << "0\n";
        }
        else
        {
            int arr[n+1]={0};
            for (int i = 0; i <n; i++)
            {
                arr[v[i]]++;
            }
            if(arr[0]==1) 
            {
                int ans;
                for (int i = 1; i <=n; i++)
                {
                    if(arr[i]==0 or arr[i]==1) 
                    {
                        ans=i;
                        break;
                    }
                }
                cout<<ans<<"\n";
            }
            else 
            {
                int ans;
                int once=0;
                for (int i = 0; i <=n; i++)
                {
                    if(arr[i]==0) 
                    {
                        ans=i;
                        break;
                    }
                    if(arr[i]==1) 
                    {
                        if(once) 
                        {
                            ans=i;
                            break;
                        }
                        once++;
                    }
                }
                cout<<ans<<"\n";
            }
        }
    }
}

