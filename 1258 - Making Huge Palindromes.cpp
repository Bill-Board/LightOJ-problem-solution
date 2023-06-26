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
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

char ss[mxi];
int lps[mxi];
void table(string p)
{
    lps[0]=0;
    int i=1,len=0,n=p.size();
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
int kmp(string t,string p)
{
    table(p);
    int ans=0,n=t.size(),m=p.size(),i=0,j=0;//cout<<p<<ses;
    while(i<n)
    {
        if(t[i]==p[j])
        {
            i++;j++;
        }
        if(i<n && p[j]!=t[i])
        {
            if(j!=0)j=lps[j-1];
            else i++;
        }
        //printf("%d %d\n",j,n);
    }//printf("%d %d\n",j,n);
    return n-j;
}
int main()
{
    //IOS
    //test
    //while(1)
    int tt;cin>>tt;
    //scanf("%d", &tt);
	//getchar();
    for(v99 k=1;k<=tt;k++)
    {
        string s,p;
        cin>>s;
        //gets(ss);//printf("%s\n",ss);
        //int len=strlen(ss);//printf("%d\n",len);
        //for(int i=0;i<len;i++)s+=ss[i];
        //scanf("%s", s);
        //cout<<s<<ses;
        //cout<<s<<ses;
        p=s;
        reverse(p.begin(),p.end());
        v99 ans=kmp(s,p);//
        //ans+=len;
        ans+=s.size();
        cout<<"Case "<<k<<": "<<ans<<ses;
        //printf("Case %d: ", k);//getchar();
        //printf("%d\n",ans);
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

