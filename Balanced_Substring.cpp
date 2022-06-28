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
    string s;
    cin >> s;
    rep(i, 0, n)
    {
        ll ca = 0, cb = 0;
        if (s[i] == 'a')
            ca++;
        else
            cb++;
        rep(j, i + 1, n)
        {
            if (s[j] == 'a')
            {
                ca++;
            }
            else
                cb++;
            if (ca == cb)
            {
                cout << i + 1 << " " << j + 1 << endl;
                return;
            }
        }
    }
    cout << "-1 -1" << endl;
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