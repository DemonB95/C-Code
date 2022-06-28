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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a%b);
}
void solve()
{
    ll n;
    cin >> n;
    if (n <= 2)
    {
        cout << n;
        return;
    }
    if (n & 1)
        cout << n * (n - 1) * (n - 2) << endl;
    else
    {
        ll ans = (n - 1) * (n - 2) * (n - 3);
        ll i = n;
        for (ll j = n - 1; j >= 1 and i * j * (j - 1) > ans; j--)
        {
            ll x = gcd(i, j);
            for (ll k = j - 1; k >= 1 && i * j * k > ans; k--)
            {
                ll s = gcd(i, k);
                ll u = gcd(j, k);
                ll v = gcd(s, x);
                if ((i * j * k / (s * x * u)) * v > ans)
                {
                    ans = (i * j * k / (s * x * u)) * v;
                }
            }
        }
        cout << ans << endl;
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