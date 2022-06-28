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
    if (n <= 3)
    {
        cout << -1 << endl;
        return;
    }
    if (n & 1)
    {
        for (ll i = n; i >= 1; i = i - 2)
        {
            cout << i << " ";
        }
        cout << 4 << " " << 2 << " ";
        for (ll i = 6; i < n; i = i + 2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        n--;
        for (ll i = n; i >= 1; i = i - 2)
        {
            cout << i << " ";
        }
        cout << 4 << " " << 2 << " ";
        for (ll i = 6; i <= n + 1; i = i + 2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
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