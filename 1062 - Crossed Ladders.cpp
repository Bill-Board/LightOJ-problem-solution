 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test  long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
#define choto 1e-7
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
void bina(double a,double b, double c)
{
    double l=0,h=min(a,b),w,high;
    while(1)
    {
        w=l+(h-l)/2;
        high=(sqrt(a*a-w*w)*sqrt(b*b-w*w))/(sqrt(a*a-w*w)+sqrt(b*b-w*w));
        if(fabs(high-c)<=choto){printf("%.10f\n",w);return;}
        else if(high<c)h=w;
        else l=w;
    }
}


int main()
{
    int n;scanf("%d",&n);
    double a,b,c;
    for(int i=1;i<=n;i++)
    {
        scanf("%lf%lf %lf",&a,&b,&c);
        printf("Case %d: ",i);bina(a,b,c);
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
