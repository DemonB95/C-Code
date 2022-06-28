#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define pb push_back
#define v(a) a.begin(), a.end()
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
bool isMember(int a, int d, int x)
{
    if (d == 0)
        return (x == a);

    return ((x - a) % d == 0 && (x - a) / d >= 0);
}
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (isMember(a, c, b))
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    demonb95;

    ll t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}