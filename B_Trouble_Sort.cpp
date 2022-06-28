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
    ll n, count0 = 0, count1 = 0;
    cin >> n;
    vll a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n)
    {
        cin >> b[i];
        if (b[i] == 0)
            count0++;
        else
            count1++;
    }

    if (is_sorted(va(a)))
    {
        cout << "Yes" << endl;
        return;
    }
    if (count0 == 0 || count1 == 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
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