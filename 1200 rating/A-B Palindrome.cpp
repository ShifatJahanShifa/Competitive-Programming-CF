#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        if ((a + b) % 2 == 0 and a & 1) // i found
            puts("-1");
        else
        {
            int cnta = 0, cntb = 0;
            for (int i = 0; i < a + b; i++)
            {
                if (s[i] == '0')
                    cnta++;
                else if (s[i] == '1')
                    cntb++;
            }
            if (cnta > a or cntb > b) // valid
                puts("-1");
            else
            {
                cnta = a - cnta, cntb = b - cntb;
                // int mid=(a+b)>>1;
                int l = 0, r = a + b - 1;
                bool off = false;
                while (l < r)
                {
                    if (s[l] == '0' and s[r] == '1')
                    {
                        puts("-1");
                        off = true;
                        break;
                    }
                    else if (s[l] == '0' and s[r] == '?')
                    {
                        if (cnta)
                        {
                            cnta--;
                            s[r] = '0';
                        }
                        else
                        {
                            puts("-1");
                            off = true;
                            break;
                        }
                    }
                    else if (s[l] == '1' and s[r] == '0')
                    {
                        puts("-1");
                        off = true;
                        break;
                    }
                    else if (s[l] == '1' and s[r] == '?')
                    {
                        if (cntb)
                        {
                            cntb--;
                            s[r] = '1';
                        }
                        else
                        {
                            puts("-1");
                            off = true;
                            break;
                        }
                    }
                    else if (s[l] == '?' and s[r] == '0')
                    {
                        if (cnta)
                        {
                            cnta--;
                            s[l] = '0';
                        }
                        else
                        {
                            puts("-1");
                            off = true;
                            break;
                        }
                    }
                    else if (s[l] == '?' and s[r] == '1')
                    {
                        if (cntb)
                        {
                            cntb--;
                            s[l] = '1';
                        }
                        else
                        {
                            puts("-1");
                            off = true;
                            break;
                        }
                    }
                    l++, r--;
                }
                if (off)
                    continue; 
                if(cnta<0 or cntb<0) 
                {
                    puts("-1");
                     continue;
                }
                l = 0, r = a + b - 1;
                while (l < r)
                {
                    if (s[l] == '?' and s[r] == '?')
                    {
                        if (cnta > 1)
                        {
                            cnta -= 2;
                            s[l] = '0', s[r] = '0';
                        }
                        else if (cntb > 1)
                        {
                            cntb -= 2;
                            s[l] = '1', s[r] = '1';
                        }
                        else
                        {
                            puts("-1");
                            off = true;
                            break;
                        }
                    }
                    l++,r--;
                }
                if (off)
                    continue;
                if ((a + b) & 1)
                {
                    if (cnta)
                        s[l] = '0';
                    else if (cntb)
                        s[l] = '1'; 
                    
                }
                cout<<s<<"\n";
            }
        }
    }
}
