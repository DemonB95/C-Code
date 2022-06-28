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
    ll n;
    cin >> n;
    vll v;
    multiset<ll> ms;
    bool flag=0;
    while (n--)
    {
        
        int a, b;
        cin >> a;
        if (a == 1)
        {
            cin >> b;
            v.pb(b);
            ms.insert(b);
        }
        else if (a == 2)
        {
            if(flag)
            {

                
                ms.erase(ms.begin());
                

            }
            cout << v[0] << endl;
             ms.erase(ms.find(v[0]));
            v.erase(v.begin());
           
        }
        else if(a ==3)
        {
            flag=1;

        }
        
    }
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