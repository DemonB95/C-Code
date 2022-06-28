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
    ll n, a;
    cin >> n >> a;
    vll v(n);
    rep(i, 1, n + 1) cin >> v[i];
    ll sum = v[a];
    rep(i, 1, n + 1)
    {
        ll l = a - i;
        ll r = a + i;
        if (l >= 1 && r > n)
            sum += v[l];
        if (l >= 1 && r <= n)
        {
            if (v[l] == 1 && v[r] == 1)
                sum += 2;
        }
        if (l < 1 && r <= n)
            sum += v[r];
    }
    cout << sum;
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