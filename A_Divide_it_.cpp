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
    ll count2 = 0, count3 = 0, count5 = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        count2++;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        count3++;
    }
    while (n % 5 == 0)
    {
        n /= 5;
        count5++;
    }
    if (n != 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << count2 + count3 * 2 + count5 * 3 << endl;
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