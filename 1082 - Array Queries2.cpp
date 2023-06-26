 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
#define mxi 100005
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 w=INT_MAX,tree[4*mxi+1];
vector<v99>a;

void segtree(v99 node,v99 st,v99 ed)
{
    tree[node]=0;
    if(st==ed){tree[node]=a[st];return;}
    v99 mid=(st+ed)/2;
    segtree(2*node,st,mid);
    segtree(2*node+1,mid+1,ed);
    tree[node]=min(tree[2*node],tree[2*node+1]);
}
v99 query(v99 node,v99 st,v99 ed,v99 l, v99 r)
{
    if(ed<l || st>r)return w;  /// fully outside
    if(l<=st && ed<=r)return tree[node]; /// fully in side
    v99 mid=(st+ed)/2;
    v99 p1=query(2*node,st,mid,l,r);
    v99 p2=query(2*node+1,mid+1,ed,l,r);
    return min(p1,p2);
}


int main()
{
    //IOS
    v99 t,q=0;cin>>t;
    while(t--)
    {
        //memset(tree,0,sizeof tree);
        v99 m,n;cin>>n>>m;a.clear();a.push_back(0);
        for(v99 i=0;i<n;i++){v99 x;cin>>x;a.push_back(x);}
        segtree(1,1,n);
        //for(v99 i=1;i<=2*n-1;i++)cout<<tree[i]<<whp;cout<<ses;
        cout<<"Case "<<++q<<":\n";
        while(m--)
        {
            v99 l,r;cin>>l>>r;
            cout<<query(1,1,n,l,r)<<ses;
        }
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
