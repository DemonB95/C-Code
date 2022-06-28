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
    vll ans(n);
    ans[0] = 1;
    rep(i, 1, n)
    {
        ans[i] = 3 * ans[i - 1];
        if (ans[i] >= 1e9)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    rep(i, 0, n)
    {
        cout << ans[i] << ' ';
    }
    cout << endl;
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