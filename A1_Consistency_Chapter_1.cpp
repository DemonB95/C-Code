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
    string t;
    cin >> t;
    int n = (int)t.size();
    string s = "AEIOU";
    map<char, int> m;
    int ans = INT_MAX;

    rep(i, 0, n)
    {
        m[t[i]]++;
    }
    for (auto e : m)
    {
        int count = 0;
        if (s.find(e.first) != string::npos)
        {
            rep(i, 0, n)
            {
                if (t[i] == e.first)
                    continue;
                else if (s.find(t[i]) == string::npos)
                {
                    count++;
                }
                else
                    count += 2;
            }
        }
        else
        {
            rep(i, 0, n)
            {
                if (t[i] == e.first)
                    continue;
                else if (s.find(t[i]) == string::npos)
                {

                    count += 2;
                }
                else
                    count++;
            }
        }

        ans = min(ans, count);
    }
    bool ok = true;
    rep(i, 0, n)
    {
        if (s.find(t[i]) == string::npos)
        {
            ok = false;
        }
    }
    if (ok)
    {
        ans = min(ans, n);
    }
    ok = true;
    rep(i, 0, n)
    {
        if (s.find(t[i]) != string::npos)
        {
            ok = false;
        }
    }
    if (ok)
    {
        ans = min(ans, n);
    }
    cout << ans << endl;
}
int main()
{
    demonb95;

    ll t;
    cin >> t;
    rep(i, 1, t + 1)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}