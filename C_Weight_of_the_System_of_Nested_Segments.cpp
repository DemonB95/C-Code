#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define va(a) a.begin(), a.end()
#define vd(d) d.begin(), d.end(), greater<ll>()
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
    ll n, m;
    vector<pair<int, pair<int, int>>> v;
    vector<pair<int, int>> g;
    ll ans = 0;
    cin >> n >> m;
    rep(i, 1, m + 1)
    {
        ll x, w;
        cin >> x >> w;
        v.pb(mp(w, mp(x, i)));
    }
    sort(va(v));
    rep(i, 0, 2 * n)
    {
        ans += v[i].first;
        g.pb(v[i].second);
    }
    sort(va(g));
    cout << ans << endl;
    for (ll i = 0, j = 2 * n - 1; i < j; i++, j--)
        cout << g[i].second << " " << g[j].second << endl;
}
int main()
{
    demonb95;

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}