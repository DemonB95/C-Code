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
vll ar[200001];
ll vis[200001];
void dfs(ll v)
{
    vis[v] = 1;
    sort(ar[v].begin(), ar[v].end());
    for (ll child : ar[v])
    {
        if (!vis[child])
        {
            cout << v << " ";
            dfs(child);
        }
    }
    cout << v << " ";
}
void solve()
{
    ll n;
    cin >> n;
    ll y = n - 1;
    while (y--)
    {
        ll a, b;
        cin >> a >> b;
        ar[a].pb(b);
        ar[b].pb(a);
    }
    rep(i, 1, n + 1)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
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