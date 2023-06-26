//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
vector<v99>v[10000];
v99 visi[30000];
bool ok=false;
void dfs(v99 ind)
{
    if(ok)return;
    //if(visi[ind]){ok=true;return;}
    visi[ind]=1;
    for(v99 i=0;i<v[ind].size();i++)
    {
        if(visi[v[ind][i]]==1){ok=true;return;}
        else if(visi[v[ind][i]]==0)dfs(v[ind][i]);
    }
    visi[ind]=2;
}





int main()
{
    int tt;//cin>>tt;
    scanf("%d",&tt);
    for(int k=1;k<=tt;k++)
    //test
    //while(1)
    {
        map < string, v99 > mymap;
        int edge;v99 assign = 0;
        //cin >> edge;
        scanf("%d",&edge);
        memset(visi,0,sizeof visi);
        for (v99 i = 0; i < edge; i++)
        {
            string s1, s2;
            cin >> s1;
            cin >> s2;
            if (mymap.find(s1) == mymap.end())
            {
                //printf("Mapping %s with %d\n", s1, assign);
                mymap[s1] = assign++;
            }
            if (mymap.find(s2) == mymap.end())
            {
                //printf("Mapping %s with %d\n", s2, assign);
                mymap[s2] = assign++;
            }
            v99 x = mymap[s1];
            v99 y = mymap[s2];
            //if(x>y)swap(x,y);
            v[x].push_back(y);
            //cout << "Edge: " << x << " " << y << endl;
        }//cout<<assign<<ses;
        ok=false;
        for(v99 i=0;i<assign;i++)
        {
            if(visi[i]==1){ok=true;break;}
            dfs(i);
        }
        printf("Case %d: ",k);
        if(ok)printf("No\n");
        else printf("Yes\n");
        //if(ok)cout<<"Case "<<k<<": NO"<<ses;
        //else cout<<"Case "<<k<<": YES"<<ses;
        for(v99 i=0;i<assign;i++)v[i].clear();
        mymap.clear();
    }
    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

