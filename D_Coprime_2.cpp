#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef long long int  lli;
#define pb push_back 
#define va(a) a.begin(),a.end()
#define vd(d) d.begin(),d.end(),greater<ll>()
#define vi vector<int> 
#define vll vector<long long >
#define pb push_back 
#define pii pair<int,int> 
#define si set<int>
#define sll set<long long>
#define endl "\n"
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define demonb95 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
bool isPrime(int n)
{
    if (n < 1)
        return false;

    if(n==1) return true;  

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
void solve()
{
    ll n,m,x=0;
    cin>>n>>m;
    vll v(n),t;
    bool flag=false;
    rep(i,0,n)
    {
        cin>>v[i];
    }
    sort(va(v));
    rep(i,1,m+1)
    {
        if(isPrime(i))
        {
            ll count=0;
            rep(j,0,n)
            {
                ll count=0;
                if(!isPrime(v[j]))
                {
                    flag=true;
                }
                else {
                    flag=false;
                    count++;
                }
            }
            if(flag==true && count==0)
            {
                x++;
                t.pb(i);
            }
        }
    }
    cout<<x<<endl;
    rep(i,0,x)
    {
        cout<<t[i]<<endl;
    }



 
}
int main()
{
demonb95;
  
ll t=1;
// cin>>t;
while(t--)
{
   solve(); 
}
return 0;
}