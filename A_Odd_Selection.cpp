#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define pb push_back
#define va v.begin(), v.end()
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
    ll n, x, odd = 0, even = 0;
    cin >> n >> x;
    vll v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
        if (v[i] & 1)
        {
            odd++;
        }
        else
            even++;
    }
    bool ans = 0;
    for (ll i = 1; i <= odd && i <= x; i = i + 2)
    {
        ll left = x - i;
        if (left <= even)
        {
            ans = 1;
        }
    }
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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