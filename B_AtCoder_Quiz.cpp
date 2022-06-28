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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string s = s1 + s2 + s3;
    sort(va(s));
    int b = 0, r = 0, g = 0, h = 0;
    rep(i, 0, s.length())
    {
        if (s[i] == 'B')
            b++;
        if (s[i] == 'R')
            r++;
        if (s[i] == 'G')
            g++;
        if (s[i] == 'H')
            h++;
    }
    if (b == 0)
        cout << "ABC";
    if (g == 0)
        cout << "AGC";
    if (h == 0)
        cout << "AHC";
    if (r == 0)
        cout << "ARC";
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