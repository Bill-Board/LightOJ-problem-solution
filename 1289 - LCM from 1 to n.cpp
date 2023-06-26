 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test  long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 100000000
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
typedef unsigned v99;
typedef unsigned long long ull;
using namespace std;
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
v99 prime[(mxi/32)+1];
bool chk(v99 n,v99 pos)
{
    return (bool)(n&(1<<pos));
}
v99 sett(v99 n,v99 pos)
{
    n=n|(1<<pos);
    return n;
}
v99 prmsize=0,prm[5761482];
void bitwise_sieve(v99 n)
{
    v99 sq=sqrt(n)+1;
    for(v99 i=3;i<=sq;i++){
        if(!chk(prime[i>>5],i&31))
        {
            for(v99 j=i*i;j<=n;j+=2*i)
                prime[j>>5]=sett(prime[j>>5],j&31);
        }
    }prm[prmsize++]=2;
    for(v99 i=3;i<=n;i+=2)
        if(!chk(prime[i>>5],i&31))prm[prmsize++]=i;
}
v99 acha[5761482];
void age_kore_rakhi()
{
    bitwise_sieve(100000000);
    //for(auto i:prm)cout<<i<<whp;cout<<ses;
    acha[0]=2;
    for(v99 i=1;i<prmsize;i++)acha[i]=(acha[i-1]*prm[i]);

}
v99 calu(v99 n)
{
    v99 sq=sqrt(n),sum=1;
    for(v99 i=0;i<prmsize&&prm[i]<=sq;i++)
    {
        v99 kot=n;
        kot/=prm[i];
        while(prm[i]<=kot)
        {
            sum*=prm[i];
            kot/=prm[i];
        }
    }
    return sum;
}


int main()
{
    /// ekhane v99= unsigned; bcz ekhanr mod 2^32 korte bola hoise, to unsigned used korlei hoy.
    /// mod 2^32 r kaj unsigned used korlei hbe.
    //freopen("data.out","w",stdout);
    age_kore_rakhi();v99 q=1;
    test
    //while(1)
    {
        v99 n;cin>>n;v99 cr_h=calu(n);
        v99 pos=upper_bound(prm,prm+prmsize,n)-prm;
        cr_h*=acha[pos-1];
        printf("Case %u: %u\n",q++,cr_h);
    }
    return 0;
}




/**
       Alhamdulillah...
*/

