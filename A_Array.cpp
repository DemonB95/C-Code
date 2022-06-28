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
    ll n;
    cin >> n;
    vll v, a, b, c;
    rep(i, 0, n)
    {
        ll x;
        cin >> x;
        if (x == 0)
            c.pb(x);
        else if (x > 0)
            b.pb(x);
        else
            v.pb(x);
    }
    a.pb(v[0]);
    v.erase(v.begin());
    if (v.size() >= 2)
    {
        b.pb(v[0]);
        b.pb(v[1]);
        rep(i, 2, v.size()) c.pb(v[i]);
    }
    else
    {
        rep(i, 0, v.size()) c.pb(v[i]);
    }
    cout << a.size() << " ";
    rep(i, 0, a.size()) cout << a[i] << " ";
    cout << endl;
    cout << b.size() << " ";
    rep(i, 0, b.size()) cout << b[i] << " ";
    cout << endl;
    cout << c.size() << " ";
    rep(i, 0, c.size()) cout << c[i] << " ";
    cout << endl;
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