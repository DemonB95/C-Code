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
    ll n, k;
    cin >> n >> k;
    vll a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    ll c1 = 0, c2 = 0, x;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= k)
        {
            c1++;
        }
        if (a[i] > k)
        {
            x = i;
            break;
        }
    }
    for (ll j = n - 1; j >= x; j--)
    {
        if (a[j] <= k)
        {
            c2++;
        }
        if (a[j] > k)
        {
            break;
        }
    }

    cout << c1 + c2 << endl;
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