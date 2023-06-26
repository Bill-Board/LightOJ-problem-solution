 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 5000006
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef long long ull;
typedef unsigned long long v99;
using namespace std;
//v99 fx[4]= {1,-1,0,0};
//v99 fy[4]= {0,0,1,-1};
//v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
//v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sort2val(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.second==b.second)return a.first<b.first;
    return a.second<b.second;
}
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
/**
bool prime[1000020];vector<v99>prm;
void SieveOfEratosthenes(int n)
{
	memset(prime, true, sizeof(prime));
	for(v99 i=4;i<=n;i+=2)prime[i]=false;
	for (int p=3; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			/// Update all multiples of p
			for (v99 i=p*p; i<=n; i += 2*p)
				prime[i] = false;
		}
	}
	rep1(i,2,n)if(prime[i])prm.push_back(i);

}*/
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}

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
bool prime[mxi];v99 toi[mxi];
void totient(v99 n)
{
	rep1(i,1,n)toi[i]=i;
	memset(prime,true,sizeof(prime));
	for (v99 p=2; p<=n; p++)
	{
		if (prime[p] == true)
		{
			/// Update all multiples of p
			for (v99 i=2*p; i<=n; i += p)
				{
				    prime[i] = false;
				    toi[i]-=(toi[i]/p);
				}
		}
	}
}


///-------------------------------------------------------------------------------------------------------



int main()
{

    //freopen("data.out","w",stdout);
    totient(mxi-2);
    rep1(i,1,mxi-1)
    {
        if(toi[i]==i)toi[i]--;
        toi[i]*=toi[i];
        toi[i]+=toi[i-1];
    }v99 q=1;
    test
    //while(1)
    {
        v99 a,b;scanf("%llu %llu",&a,&b);
        printf("Case %llu: %llu\n",q++,toi[b]-toi[a-1]);
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
