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
    int n, k;
    cin >> n >> k;
    int n1 = n - (k - 1);
    if (n1 > 0 && n1 % 2 == 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; ++i)
            cout << "1 ";
        cout << n1 << endl;
        return;
    }
    int n2 = n - 2 * (k - 1);
    if (n2 > 0 && n2 % 2 == 0)
    {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; ++i)
            cout << "2 ";
        cout << n2 << endl;
        return;
    }
    cout << "NO" << endl;
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