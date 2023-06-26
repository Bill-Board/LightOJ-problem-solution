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
#define mxi 200003
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
# define INF 1e18
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int>> pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
vector<pair<v99,v99>>a[mxi];
v99 www[mxi],ans2[mxi],ans[mxi],disi[mxi];
void bfs()
{
    priority_queue<pair<v99,v99>,vector<pair<v99,v99>>,greater<pair<v99,v99>>>q;
    q.push(make_pair(0,1));disi[1]=0;
    while(!q.empty())
    {
        v99 x=q.top().second;q.pop();///cout<<"x "<<x<<ses;
        for(auto u:a[x])
        {
            v99 v=u.first;
            v99 weight=u.second;
            if(disi[v]>disi[x]+weight)
            {
                //cout<<"v "<<v<<ses;
                www[v]=min(www[v],weight);
                ans[v]=disi[v];
                disi[v]=disi[x]+weight;
                q.push(make_pair(disi[v],v));
                ans2[v]=x;
            }
            else ans[v]=min(ans[v],disi[x]+weight);
        }
    }
}


void inti(v99 n)
{
    for(v99 i=1;i<=n;i++){www[i]=(v99)INF;disi[i]=(v99)INF;ans[i]=0;a[i].clear();}
}
int main()
{
    test
    //while(1)
    {
        v99 n,m,mmm1=LLONG_MAX;cin>>n>>m;inti(n);//for(v99 i=1;i<=n;i++)cout<<ans[i]<<whp;cout<<ses;
        map<pair<v99,v99>,v99>mpp;
        for(v99 i=0;i<m;i++)
        {
            v99 u,v,w;cin>>u>>v>>w;
            a[u].push_back(make_pair(v,w));
            a[v].push_back(make_pair(u,w));
            if(u>v)swap(u,v);
            if(mpp[{u,v}])mpp[{u,v}]=min(mpp[{u,v}],w);
            else mpp[{u,v}]=w;
        }
        bfs();
        ///*
        for(v99 i=1;i<=n;i++)cout<<disi[i]<<whp;cout<<ses;
        for(v99 i=1;i<=n;i++)cout<<ans[i]<<whp;cout<<ses;
        for(v99 i=1;i<=n;i++)cout<<ans2[i]<<whp;cout<<ses;
        for(v99 i=1;i<=n;i++)cout<<www[i]<<whp;cout<<ses;
        //*/
        for(v99 i=1;i<=n;i++){if(mpp[{i,n}])mmm1=min(mmm1,mpp[{i,n}]);}
        v99 i=n,mmm=LLONG_MAX;
        while(i!=1)
        {
            mmm=min(mmm,mpp[{ans2[i],i}]);
            i=ans2[i];
        }
        cout<<mmm1<<whp<<mmm<<whp<<disi[n]<<ses;
        cout<<min(disi[n]+(2*mmm),min(ans[n],disi[n]+(2*mmm1)))<<ses;
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
