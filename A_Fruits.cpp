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
    ll n, j = 0, k = 0, l = 0;
    cin >> n;
    ll a[n], b[n], c[n];
    string s;
    cin >> s;
    rep(i, 0, s.length())
    {
        if (s[i] == 'a')
        {
            a[j++] = i + 1;
        }
        if (s[i] == 'b')
        {
            b[k++] = i + 1;
        }
        if (s[i] == 'o')
        {
            c[l++] = i + 1;
        }
    }
    rep(i, 0, j)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    rep(i, 0, k)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    rep(i, 0, l)
    {
        cout << c[i] << " ";
    }
    cout << endl;
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