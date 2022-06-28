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
ll vis[101];
void solve()
{
    ll n;
    cin >> n;
    vll v(2 * n);
    rep(i, 0, 2 * n) cin >> v[i];
    map<ll, ll> mp;

    rep(i, 0, 2 * n)
    {
        if (mp[v[i]] == 0)
        {
            cout << v[i] << " ";
            mp[v[i]]++;
        }
    }
    cout << endl;
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