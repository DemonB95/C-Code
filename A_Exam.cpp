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
    if (n <= 2)
    {
        cout << 1 << endl;
        cout << 1 << endl;
    }
    else if (n == 3)
    {
        cout << 2 << endl;
        cout << 1 << " " << 3 << endl;
    }
    else if (n == 4)
    {
        cout << 4 << endl;
        cout << "2 4 1 3 " << endl;
    }
    else
    {
        cout << n << endl;
        for (ll i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (ll i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
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