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
int main()
{
    demonb95;
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, cr = 0, cu = 0, cl = 0, cd = 0;
        cin >> x >> y;
        string s;
        cin >> s;
        rep(i, 0, s.length())
        {
            if (s[i] == 'R')
                cr++;
            if (s[i] == 'U')
                cu++;
            if (s[i] == 'L')
                cl++;
            if (s[i] == 'D')
                cd++;
        }

        if (x >= 0 && y >= 0)
        {
            if (cr >= abs(x) && cu >= abs(y))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else if (x <= 0 && y >= 0)
        {
            if (cl >= abs(x) && cu >= abs(y))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else if (x <= 0 && y <= 0)
        {
            if (cl >= abs(x) && cd >= abs(y))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            if (cr >= abs(x) && cd >= abs(y))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}