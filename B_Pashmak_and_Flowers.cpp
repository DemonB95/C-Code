#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define pb push_back
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
    ll n;
    cin >> n;
    vll v(n);
    rep(i, 0, n) cin >> v[i];

    sort(va(v));
    cout << v[n - 1] - v[0] << " ";

    if (v[0] == v[n - 1])
    {
        cout << (n * (n - 1)) / 2 << endl;
    }
    else
    {
        ll x = v[0], y = v[n - 1];
        ll a = count(va(v), x);
        ll b = count(va(v), y);
        cout << a * b << endl;
    }
}
int main()
{
    demonb95;

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}