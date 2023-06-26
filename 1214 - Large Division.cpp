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
#define mxi 200003
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sort2val(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.second==b.second)return a.first<b.first;
    return a.second<b.second;
}
/**
bool prime[mxi+1];
void SieveOfEratosthenes(int n)
{
	memset(prime, true, sizeof(prime));
	for(v99 i=4;i<=n;i+=2)prime[i]=false;
	for (int p=3; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			/// Update all multiples of p
			for (int i=p*p; i<=n; i += 2*p)
				prime[i] = false;
		}
	}
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


///-------------------------------------------------------------------------------------------------------



int main()
{

    freopen("data.out","w",stdout);
    v99 q=1;
    test
    {
        string s;v99 mod,r=0;cin>>s;cin>>mod;
        if(s[0]=='-')s.erase(s.begin());mod=abs(mod);
        rep0(i,0,s.size())r=(r*10 + s[i]-'0')%mod;
        if(r==0)printf("Case %lld: divisible\n",q++);
        else printf("Case %lld: not divisible\n",q++);
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
