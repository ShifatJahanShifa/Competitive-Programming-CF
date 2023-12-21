#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, a, q;
        cin >> n >> a >> q;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < q; i++)
        {
            mp[s[i]]++;
        }
        if (n > (a + mp['+']))
            puts("NO");
        else
        {
            if (n == a)
                puts("YES");
            else
            {
                bool myb = false,possible=false;
                int p = a;
                for (int i = 0; i < q; i++)
                {
                    if(s[i]=='+') 
                    {
                        p++;
                        if(myb)  myb=false;
                        if(p==n) break;
                    }
                    else if(s[i]=='-')
                    {
                        myb=true;
                        i++;
                        int minus=1,plus=0;
                        for (; i < q; i++)
                        {
                            if(s[i]=='-') minus++;
                            else plus++;
                            if(minus==plus) 
                            {
                                break;
                            }
                        }
                    }
                }
                if(p!=n) myb=true;
                myb ? puts("MAYBE") : puts("YES");
            }
        }
    }
}
