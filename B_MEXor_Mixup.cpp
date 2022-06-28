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
ll s[300001];
void res()
{

    ll ans = 0, i = 1, idx = 2;
    ;
    s[1] = ans;
    for (; i < 300000; i++)
    {
        ans = ans ^ i;
        s[idx++] = ans;
    }
}
void solve()
{

    ll x, y;
    cin >> x >> y;

    if (s[x] == y)
        cout << x;
    else
    {
        if ((s[x] ^ x) == y)
            cout << x + 2;
        else
            cout << x + 1;
    }
    cout << endl;
}
int main()
{
    demonb95;
    res();
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}