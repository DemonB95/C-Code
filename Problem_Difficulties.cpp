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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    si s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    if (s.size() == 2)
    {
        if ((a == b && c == d) ||(a == c && b == d) || (c == b && a == d))
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    else if (s.size() == 4 || s.size() == 3)
        cout << 2 << endl;
    else
        cout << 0 << endl;
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