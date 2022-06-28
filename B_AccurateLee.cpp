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
    bool flag = true;
    rep(i, 1, s.size())
    {
        if (s[i] < s[i - 1])
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << s << endl;
        return;
    }
    string ans;
    rep(i, 0, s.length())
    {
        if (s[i] == '1')
        {
            break;
        }
        ans.pb('0');
    }
    ans.pb('0');
    for (ll i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            break;
        }
        ans.pb('1');
    }
    cout << ans << endl;
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