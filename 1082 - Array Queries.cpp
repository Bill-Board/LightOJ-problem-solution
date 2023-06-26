//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Sequence Containers : vector,deque,list....
#define vc    vector<char>
#define vi    vector<int>
#define vs    vector<string>
#define dqi   deque<int>
#define dqc   deque<char>
#define lii   list<int>
#define lic   list<char>
#define pb    push_back
#define pf    push_front
#define pff() pop_front()
#define pbb() pop_back()

//Container Adaptors : queue,priority_queue, stack....
#define sti   stack<int>
#define stc   stack<char>

//Associative Containers : map,set....
#define mpll  map<long long ,long long>
#define mps   map<string,string>
#define si    set<int>
#define sc    set<char>
#define msi   multiset<int>

#define ses   "\n"
#define whp   " "
#define mx 10009

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int arr[mx];
int tree[mx*3];

void init (int node , int b, int e)
{
    //tree[node]=0;
    if(b==e){tree[node]=arr[b];return;}
    int left=node*2;
    int right = node*2 +1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=min(tree[right],tree[left]);
}

int queri(int node,int b, int e, int i, int j)
{
    if(i>e || j<b)return 99999;/// baire.
    if(i<=b && e<=j)return tree[node];/// ekkebare moddhe.
    int left=node*2;
    int right=node*2 +1;
    int mid=(b+e)/2;
    int p1=queri(left,b,mid,i,j);
    int p2=queri(right,mid+1,e,i,j);
    return min(p1,p2);
}
/**        5
    78 1 22 12 3*/

int main()
{
    IOS
    int t;cin>>t;arr[0]=0;
    for(int p=1;p<=t;p++)
    {
        int n,q;cin>>n>>q;

        for(int i=1;i<=n;i++)
            cin>>arr[i];
        init(1,1,n);
        //for(int i=1;i<=(2*n -1);i++)
            //cout<<tree[i]<<whp;
        //cout<<ses;

        int i,j,sum;
        cout<<"Case "<<p<<":\n";
        while(q--)
        {
            cin>>i>>j;
            sum=queri(1,1,n,i,j);
            cout<<sum<<ses;
        }
    }
    return 0;
}


