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
    ll n, m;
    cin >> n >> m;
    ll count = 0;
    rep(i, 0, 1001)
    {
        rep(j, 0, 1001)
        {
            if (i * i + j == n && j * j + i == m)
            {
                count++;
            }
        }
    }
    cout << count << endl;
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