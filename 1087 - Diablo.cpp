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
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{

    v99 tt;scanf("%lld",&tt);
    for(v99 q=1;q<=tt;q++)
    {
        puts("");
        v99 n,m;scanf("%lld",&n);
        scanf("%lld",&m);
        vector<v99>a;
        for(v99 i=0;i<n;i++)
        {
            v99 x;scanf("%lld",&x);
            a.push_back(x);
        }char c;
        printf("Case %lld:\n",q);
        getchar();
        while(m--)
        {
            scanf("%c",&c);
            if(c=='a')
            {
                v99 x;scanf("%lld",&x);
                a.push_back(x);
            }
            else
            {
                v99 x;scanf("%lld",&x);--x;
                if(x<a.size())
                {
                    printf("%lld\n",a[x]);
                    a.erase(a.begin()+x);
                }
                else printf("none\n");
            }getchar();
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
