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
    set<char> s = {'a', 'e', 'i', 'o', 'u'};
    string a, b;
    cin >> a >> b;
    if (a.size() != b.size())
    {
        cout << "No" << endl;
    }
    else
    {
        bool flag = true;
        rep(i, 0, a.length())
        {
            if (a[i] != b[i] && s.count(a[i]) != s.count(b[i]))
                flag = false;
        }
        cout << (flag ? "Yes" : "No");
    }
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