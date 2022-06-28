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
    ll n, m, sum = 0, ans = 0;
    cin >> n >> m;
    if (n < m)
    {
        cout << 0 << endl;
        return;
    }
    // else if (n == m)
    // {
    //     cout << 1 << endl;
    // }
    else
    {
        rep(i, 1, 11)
        {
            sum += ((i * m) % 10);
        }
        ll x = n / m;
        if (x >= 10)
        {
            ll y = x / 10, z = x % 10, add = 0;
            ans = ans + (y * sum);
            rep(i, 1, z + 1)
            {
                add += ((i * m) % 10);
            }
            ans += add;
            cout << ans << endl;
        }
        else
        {
            rep(i, 0, x + 1)
            {
                ans += ((i * m) % 10);
            }
            cout << ans << endl;
        }
    }
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