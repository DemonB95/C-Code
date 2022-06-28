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
    map<ll, ll> m;
    ll sum = 0;
    rep(i, 0, 5)
    {
        ll x;
        cin >> x;
        sum += x;
        m[x]++;
    }
    if (m.size() == 5)
    {
        cout << sum;
        return;
    }
    ll ans = 0;
    for (auto it : m)
    {
        if (it.second >= 2)
        {
            if (it.second == 2)
                ans = max(ans, 2 * it.first);
            else
            {
                ans = max(ans, 3 * it.first);
            }
        }
    }
    cout << sum - ans << endl;
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