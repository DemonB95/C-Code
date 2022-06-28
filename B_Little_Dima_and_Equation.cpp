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
ll binpow(ll a, ll b) // a raise to b
{
    if (b == 0)
        return 1;

    ll ans = binpow(a, b / 2);
    if (b % 2)
        return ans * ans * a;
    else
        return ans * ans;
}
ll sum(ll x)
{
    ll res = 0;
    while (x > 0)
    {
        res += x % 10;
        x = x / 10;
    }
    return res;
}
void solve()
{
    ll a, b, c, count = 0;
    cin >> a >> b >> c;
    vll v;
    rep(i, 1, 82)
    {
        ll x = b * binpow(i, a) + c;
        if (x > 0 && x < 1000000000LL && i == sum(x))
        {
            count++;
            v.pb(x);
        }
    }
    cout << count << endl;
    rep(i, 0, count)
    {
        cout << v[i] << " ";
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