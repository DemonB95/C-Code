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
    ll n;
    cin >> n;
    ll count = 0, c1 = 0, c2 = 0, cm = 0;
    rep(i, 0, n)
    {
        ll x;
        cin >> x;
        if (x % 3 == 0)
        {
            count++;
        }
        else
        {
            x = x % 3;
            if (x == 1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
    }
    if (c1 == c2)
    {
        cout << count + c1 << endl;
    }
    else if (c1 > c2)
    {
        ll cx = c1 - c2;
        cm = cx / 3;
        cout << count + c2 + cm << endl;
    }
    else
    {
        ll cy = c2 - c1;
        cm = cy / 3;
        cout << count + c1 + cm << endl;
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