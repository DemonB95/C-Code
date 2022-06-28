#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define pb push_back

#define endl "\n"
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define Anit                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;
    ll count = 0;
    rep(i, 0, n)
    {
        if (b[i] == '1')
        {
            if (a[i] == '0')
            {
                count++;
                a[i] = '3';
            }
            else
            {
                if (a[i - 1] == '1' && i - 1 >= 0)
                {
                    count++;
                    a[i - 1] = '3';
                }
                else if (a[i + 1] == '1' && i + 1 < n)
                {
                    count++;
                    a[i + 1] = '3';
                }
            }
        }
    }
    cout << count << endl;
}
int main()
{
   Anit;

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}