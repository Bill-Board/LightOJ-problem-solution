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
#define mxi 1000003
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
#define pii pair<v99,v99>
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
template <class T> inline T bigmod(T n,T p,T m)
{
    if(p==0)return 1;
    else if(p%2==0)
    {
        v99 val=bigmod(n,p/2,m);
        return (T)((val*val)%m);
    }
    else return (T)(((v99)n*(v99)bigmod(n,p-1,m))%m);
}
pii extendedEuclid(v99 a, v99 b) { // returns x, y | ax + by = gcd(a,b)
  if(b == 0) return pii(1, 0);
  else {
    pii d = extendedEuclid(b, a % b);
    return pii(d.second, d.first - d.second * (a / b));
  }
}
v99 modularInverse(v99 a, v99 n) {
  pii ret = extendedEuclid(a, n);
  return ((ret.first % n) + n) % n;
}
v99 fact[mxi+1];
void inti()
{
    fact[0]=1;v99 mod=1000003;
    for(v99 i=1;i<=1000000;i++)
    fact[i]=((fact[i-1]%mod)*(i%mod))%mod;
}
v99 binomialCoeff(v99 n, v99 k,v99 mod)
{
    v99 ans= ((fact[k]%mod)*(fact[n-k]%mod))%mod;
    v99 h=modularInverse(ans,mod);
    v99 res=((fact[n]%mod)*h)%mod;
	return res;
}
int main()
{
    //freopen("data.out","w",stdout);
    v99 q=1;inti();
    //test
    {
        v99 n,r,mod=1000003;
        scanf("%lld %lld",&n,&r);
        printf("Case %lld: %lld\n",q++,binomialCoeff(n,r,mod));
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

