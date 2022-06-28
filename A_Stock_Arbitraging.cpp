#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define pb push_back
#define va(a) a.begin(), a.end()
#define vd v.begin(), v.end(), greater<ll>()
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
    ll n, m, r;
    cin >> n >> m >> r;
    vll v1(n), v2(m);
    rep(i, 0, n) cin >> v1[i];

    rep(i, 0, m) cin >> v2[i];

    sort(va(v1));
    sort(va(v2));

    if (v1[0] > v2[m - 1])
    {
        cout << r << endl;
    }
    else
    {
        cout << (r % v1[0]) + ((r / v1[0]) * v2[m - 1]) << endl;
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