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
    ll a[n][n];
    rep(i, 0, n)
    {
        a[i][0] = 1;
        a[0][i] = 1;
    }
    ll ans = 1;
    rep(i, 1, n)
    {
        rep(j, 1, n)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
            ans = max(ans, a[i][j]);
        }
    }
    cout << ans << endl;
}
int main()
{
    demonb95;

    ll t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}