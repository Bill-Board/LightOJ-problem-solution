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
#define mxi 1000009
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
v99 lps[mxi];
void table(string p)
{
    lps[0]=0;
    v99 i=1,len=0,n=p.size();
    while(i<n)
    {

        if(p[i]==p[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)len=lps[len-1];
            else {lps[i]=0;i++;}
        }
    }
}
v99 kmp(string t,string p)
{
    table(p);
    v99 ans=0,n=t.size(),m=p.size(),i=0,j=0;
    while(i<n)
    {
        if(t[i]==p[j])
        {
            i++;j++;
        }
        if(j==m)
        {
            ans++;j=lps[j-1];
        }
        else if(i<n && p[j]!=t[i])
        {
            if(j!=0)j=lps[j-1];
            else i++;
        }
    }
    return ans;
}


int main()
{
    //test
    //while(1)
    int tt;cin>>tt;
    //scanf("%d",&tt);
    //getchar();
    for(v99 j=1;j<=tt;j++)
    {

        string t,p;
        //scanf("%s %s",t,p);//getchar();
        cin>>t;cin>>p;
        //scanf("%s",p);
        //printf("%s\n%s\n",t,p);
        v99 ans=kmp(t,p);
        //printf("Case %d: %lld\n",j,ans);
        cout<<"Case "<<j<<": "<<ans<<ses;
        //for(v99 i=0;i<p.size();i++)cout<<lps[i]<<whp;cout<<ses;
        getchar();
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
