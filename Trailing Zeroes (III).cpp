//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
ll legendra(ll n, ll p){
    ll cnt = 0;
    while(n){
        n /= p;
        cnt += n;
    }
    return cnt;
}


void solve(int tc)
{
    ll n ; cin >> n;
    ll l = 1, r = 1e12, ans;
    while(l <= r){
        ll mid = (l + r) /2ll;
        if(legendra(mid, 5ll) < n)
            l = mid + 1, ans = l;
        else
            r = mid - 1;
    }
    cout << "Case " << tc <<": ";
    if(legendra(ans, 5ll) != n)
        cout << "impossible\n";
    else
        cout << ans << '\n';
}



signed main()
{
     int test_case=1;
    //ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i =1 ; i<=test_case; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
