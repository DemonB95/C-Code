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
// void solve()
// {
// }
int main()
{
    demonb95;

    int n, x, y, a, b, mx, my;
    cin >> n >> x >> y;
    set<double> s;
    rep(i, 0, n)
    {
        cin >> a >> b;
        mx = x - a;
        my = y - b;
        if (mx != 0)
        {
            s.insert((double)my / mx);
        }
        else
        {
            s.insert(100001);
        }
    }
    cout << s.size();
    return 0;
}