#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define pb push_back
#define va v.begin(), v.end()
#define vd v.begin(), v.end(), greater<ll>()
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define si set<int>
#define sll set<long long>
#define endl "\n"
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define demonb95                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
void solve()
{
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vll v(n);
    rep(i, 0, n) cin >> v[i];

    ll ans = 0,anso=0, mini =INT_MAX;
        anso =+abs(a - v[0]);
        if (b < v[0])
        {
            ans += abs(b - v[0]);
        }
        else
        {
            ans = ans - b;
        }

    rep(i, 0, n)
    {
        ans=0;
        ans =+abs(a - v[i]);
        if (b < v[i])
        {
            ans += abs(b - v[i]);
        }
        else
        {
            ans = ans - b;
        }
     
     ans=min(ans,anso);
        
    }
    cout << ans << endl;
}
int main()
{
    demonb95;

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}