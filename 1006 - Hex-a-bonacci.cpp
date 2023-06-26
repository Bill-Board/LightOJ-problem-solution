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
#define mxi 100004
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
v99 a;
v99 b;
v99 c;
v99 d;
v99 e;
v99 f;
v99 n;
v99 tt;
v99 dp[10007];


int main()
{
    long long ans;
    cin>>tt;
    for(v99 i=1;i<=tt;i++)
    {

        //scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> e;
		cin >> f;
		cin >> n;
        dp[0]=a;dp[1]=b;dp[2]=c;dp[3]=d;dp[4]=e;dp[5]=f;
        for(int i=6;i<=n+1;i++)
        {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6];
            dp[i]%=10000007;
        }
        ans=dp[n] % 10000007;
        cout << "Case "<< i <<": "<< ans << endl;

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
