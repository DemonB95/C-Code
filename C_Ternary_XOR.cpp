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
#define repd(i, a, b) for (ll i = a; i >= b; i--)

#define demonb95                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string a;
    rep(i, 0, s.size())
    {
        int c = s[i] - '0';
        if (c % 2 == 0)
        {
            a.pb('0' + (c / 2));
        }
        else
        {
            a.pb('1');
            rep(j, i + 1, s.size())
                a.pb('0');
            break;
        }
    }
    string b;
    rep(i, 0, s.size())
    {
        int c = s[i] - '0';
        int ca = a[i] - '0';
        int cb = c - ca;
        if (cb < 0)
            cb += 3;
        b.pb('0' + cb);
    }
    cout << a << endl;
    cout << b << endl;
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