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
    string s;
    cin >> s;

    string t = "";
    rep(i, 1, s.length())
    {
        ll count = 0;
        t = s.substr(i, s.length()) + s.substr(0, i);
        rep(j, 0, s.length())
        {
            if (s[j] != t[j])
            {
                count++;
            }
            if (count == s.length())
            {
                cout << t << endl;
                return;
            }
        }
    }
    for (ll i = s.length() - 1; i >= 0; i--)
    {
        ll count = 0;
        t = s.substr(0, i) + s.substr(i, s.length());
        rep(j, 0, s.length())
        {
            if (s[j] != t[j])
            {
                count++;
            }
            if (count == s.length())
            {
                cout << t << endl;
                return;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}
int main()
{
    demonb95;

    ll q;
    cin >> q;
    rep(i, 1, q + 1)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}