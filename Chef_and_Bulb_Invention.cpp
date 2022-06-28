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
#define rep1(i, a, b, x) for (ll i = a; i < b; i += x)
#define demonb95                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
void solve()
{
    ll n, p, k, flag = 0, count = 0;
    cin >> n >> p >> k;
    rep(i, 0, k)
    {
        rep1(j, i, n, k)
        {
            if (j == p)
            {
                count++;
                flag = 1;
                break;
            }
            count++;
        }
        if (flag)
            break;
    }

    cout << count << endl;
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