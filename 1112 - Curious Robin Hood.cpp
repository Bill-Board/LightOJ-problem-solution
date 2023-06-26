 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#define mxi 100005
typedef long long v99;
using namespace std;
int n;
int tree[mxi];
v99 update(int i,int x)
{
    while(i<=n)
    {
        tree[i]+=x;
        i=i+(i& (-i));
    }
}
v99 query(int i)
{
    v99 sum=0;
    while(i>0)
    {
        sum+=tree[i];
        i=i-(i&(-i));
    }
    return sum;
}


int main()
{
    //IOS
    v99 ans;
    int w,m,q,l,r,x;
    scanf("%d",&w);
    for(int tt=1;tt<=w;tt++)
    {
        scanf("%d",&n);
        scanf("%d",&m);
        memset(tree,0,sizeof tree);
        for(int i=1;i<=n;i++){scanf("%d",&x);update(i,x);}
        printf("Case :%d\n",tt);
        for(int j=0;j<m;j++)
        {
            scanf("%d",&q);
            if(q==1)
            {
                scanf("%d",&l);l++;
                ans=query(l) - query(l-1);
                update(l, -ans);
                printf("%lld\n",ans);
            }
            else if(q==2)
            {
                scanf("%d",&l);
                l++;
                scanf("%d",&r);

                update(l,r);
            }
            else
            {
                scanf("%d",&l);
                scanf("%d",&r);
                l++;r++;
                ans=query(r) - query(l-1);
                printf("%lld\n",ans);
            }
        }
    }
}

