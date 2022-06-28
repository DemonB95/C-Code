#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define pb push_back
#define va v1.begin(), v1.end()
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
    vll v;
    sll s;
    ll x = 0, y;
    rep(i, 0, n)
    {
        ll z;
        cin >> z;
        s.insert(z);
        if (s.size() == x + 1)
        {
            y = i;
            v.pb(y + 1);
            x++;
        }
    }
    if (s.size() >= k)
    {
        cout << "YES" << endl;
        rep(i, 0, k)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        cout << "NO" << endl;
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