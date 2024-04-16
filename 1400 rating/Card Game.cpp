#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz=2e5+5;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        char trump;cin>>trump;
        vector<string>v(2*n);
        vector<string>clubs,diamonds,hearts,spades;
        for (int i = 0; i <n+n; i++)
        {
            cin>>v[i];
            if(v[i][1]=='C') 
            {
                clubs.push_back(v[i]);
            }
            else if(v[i][1]=='D') 
            {
                diamonds.push_back(v[i]);
            }
            if(v[i][1]=='H') 
            {
                hearts.push_back(v[i]);
            }
            else if(v[i][1]=='S') 
            {
                spades.push_back(v[i]);
            }
        }
        if(clubs.size())
        sort(clubs.begin(),clubs.end());
        if(diamonds.size())
        sort(diamonds.begin(),diamonds.end());
        if(hearts.size())
        sort(hearts.begin(),hearts.end());
        if(spades.size())
        sort(spades.begin(),spades.end());
        vector<pair<string,string>>vp;
        bool ok=false;
        if(trump=='C') 
        {
            int sz=0;
            int t=0;
            //puts("helloooffff");
            while (diamonds.size()!=sz)
            {
                if(sz==diamonds.size()-1 and clubs.size()>0) 
                {
                    if(t!=clubs.size()){
                    vp.push_back(make_pair(diamonds[sz],clubs[t]));
                    t++;
                    sz++;}
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==diamonds.size()-1 and clubs.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else 
                {
                    vp.push_back(make_pair(diamonds[sz],diamonds[sz+1]));
                    sz+=2;
                }
            }
            sz=0;
            while (hearts.size()!=sz and !ok)
            {
                if(sz==hearts.size()-1 and clubs.size()>0) 
                {
                    if(t!=clubs.size()){
                    vp.push_back(make_pair(hearts[sz],clubs[t]));
                    t++;
                    sz++;} 
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==hearts.size()-1 and clubs.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else 
                {
                    vp.push_back(make_pair(hearts[sz],hearts[sz+1]));
                    sz+=2;
                }
            }
            //if(ok) break;
            sz=0;
            while (spades.size()!=sz and !ok)
            {
                if(sz==spades.size()-1 and clubs.size()>0) 
                {
                    if(t!=clubs.size()){
                    vp.push_back(make_pair(spades[sz],clubs[t]));
                    t++;
                    sz++;} 
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==spades.size()-1 and clubs.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else 
                {
                    vp.push_back(make_pair(spades[sz],spades[sz+1]));
                    sz+=2;
                }
            }
            //if(ok) break;            
            while (clubs.size()!=t and !ok)
            {
                if((t+1)!=clubs.size())
                {
                    vp.push_back(make_pair(clubs[t],clubs[t+1]));
                    t+=2;
                } 
                else 
                {
                    ok=true;
                    break;
                }
            }
            //if(ok) break; 
        }
        else if(trump=='D')
        {
            int sz=0;
            int t=0;
            while (clubs.size()!=sz)
            {
                if(sz==clubs.size()-1 and diamonds.size()>0) 
                {
                    if(t!=diamonds.size()){
                    vp.push_back(make_pair(clubs[sz],diamonds[t]));
                    t++;
                    sz++;} 
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==clubs.size()-1 and diamonds.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else 
                {
                    vp.push_back(make_pair(clubs[sz],clubs[sz+1]));
                    sz+=2;
                }
            }
            //if(ok) break;
            sz=0;
            while (!ok and hearts.size()!=sz)
            {
                if(sz==hearts.size()-1 and diamonds.size()>0) 
                {
                    if(t!=diamonds.size()){
                    vp.push_back(make_pair(hearts[sz],diamonds[t]));
                    t++;
                    sz++;}
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==hearts.size()-1 and diamonds.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else 
                {
                    vp.push_back(make_pair(hearts[sz],hearts[sz+1]));
                    sz+=2;
                }
            }
            //if(ok) break;
            sz=0;
            while (!ok and spades.size()!=sz)
            {
                if(sz==spades.size()-1 and diamonds.size()>0) 
                {
                    if(t!=diamonds.size()){
                    vp.push_back(make_pair(spades[sz],diamonds[t]));
                    t++;
                    sz++;} 
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==spades.size()-1 and diamonds.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else 
                {
                    vp.push_back(make_pair(spades[sz],spades[sz+1]));
                    sz+=2;
                }
            }
            //if(ok) break;            
            while (!ok and diamonds.size()!=t)
            {
                if((t+1)!=diamonds.size())
                {
                    vp.push_back(make_pair(diamonds[t],diamonds[t+1]));
                    t+=2;
                } 
                else 
                {
                    ok=true;
                    break;
                }
            }
            //if(ok) break; 
        }
        else if(trump=='H')
        {
            int sz=0;
            int t=0;
            while (clubs.size()!=sz)
            {
                if(sz==clubs.size()-1 and hearts.size()>0) 
                {
                    if(t!=hearts.size()){
                    vp.push_back(make_pair(clubs[sz],hearts[t]));
                    t++;
                    sz++;} 
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==clubs.size()-1 and hearts.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else 
                {
                    vp.push_back(make_pair(clubs[sz],clubs[sz+1]));
                    sz+=2;
                }
            }
            //if(ok) break;
            sz=0;
            while (!ok and diamonds.size()!=sz)
            {
                if(sz==diamonds.size()-1 and hearts.size()>0) 
                {
                    if(t!=hearts.size()){
                    vp.push_back(make_pair(diamonds[sz],hearts[t]));
                    t++;
                    sz++;}
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==diamonds.size()-1 and hearts.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else 
                {
                    vp.push_back(make_pair(diamonds[sz],diamonds[sz+1]));
                    sz+=2;
                }
            }
            //if(ok) break;
            sz=0;
            while (!ok and spades.size()!=sz)
            {
                if(sz==spades.size()-1 and hearts.size()>0) 
                {
                    if(t!=hearts.size()){
                    vp.push_back(make_pair(spades[sz],hearts[t]));
                    t++;
                    sz++;}
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==spades.size()-1 and hearts.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else 
                {
                    vp.push_back(make_pair(spades[sz],spades[sz+1]));
                    sz+=2;
                }
            }
            //if(ok) break;            
            while (!ok and hearts.size()!=t)
            {
                if((t+1)!=hearts.size())
                {
                    vp.push_back(make_pair(hearts[t],hearts[t+1]));
                    t+=2;
                } 
                else 
                {
                    ok=true;
                    break;
                }
            }
            //if(ok) break;
        }
        else 
        {
            int sz=0;
            int t=0;
            while (clubs.size()!=sz)
            {
                if(sz==clubs.size()-1 and spades.size()>0) 
                {
                    if(spades.size()!=t){
                    vp.push_back(make_pair(clubs[sz],spades[t]));
                    t++;
                    sz++;
                    }
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==clubs.size()-1 and spades.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else 
                {
                    vp.push_back(make_pair(clubs[sz],clubs[sz+1]));
                    sz+=2;
                }
            }
            //if(ok) break;
            sz=0;
            while (!ok and diamonds.size()!=sz)
            {
                if(sz==diamonds.size()-1 and spades.size()>0) 
                {
                    if(t!=spades.size()){
                    vp.push_back(make_pair(diamonds[sz],spades[t]));
                    t++;
                    sz++;} 
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==diamonds.size()-1 and spades.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else 
                {
                    vp.push_back(make_pair(diamonds[sz],diamonds[sz+1]));
                    sz+=2;
                }
            }
            //if(ok) break;
            sz=0;
            while (!ok and hearts.size()!=sz)
            {
                if(sz==hearts.size()-1 and spades.size()>0) 
                {
                    if(spades.size()!=t){
                    vp.push_back(make_pair(hearts[sz],spades[t]));
                    t++;
                    sz++;} 
                    else 
                    {
                        ok=true;
                        break;
                    }
                }
                else if(sz==hearts.size()-1 and spades.size()==0) 
                {
                    ok=true;
                    break;
                } 
                else {vp.push_back(make_pair(hearts[sz],hearts[sz+1]));
                sz+=2;}
            }
            //if(ok) break;            
            while (!ok and spades.size()!=t)
            {
                if((t+1)!=spades.size())
                {
                    vp.push_back(make_pair(spades[t],spades[t+1]));
                    t+=2;
                } 
                else 
                {
                    ok=true;
                    break;
                }
            }
            //if(ok) break;
        }
        if(ok) cout<<"IMPOSSIBLE\n";
        else
        {
            for (int i = 0; i <n; i++)
            {
                cout<<vp[i].first<<" "<<vp[i].second<<"\n";
            }
        }
    }
    
}
