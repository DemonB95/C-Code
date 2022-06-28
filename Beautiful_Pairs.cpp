#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef long long int  lli;
#define pb push_back 
#define va v.begin(),v.end()
#define vd v.begin(),v.end(),greater<ll>()
#define vi vector<int> 
#define vll vector<long long >
#define pb push_back 
#define pii pair<int,int> 
#define si set<int>
#define sll set<long long>
#define endl "\n"
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define demonb95 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    ll n;
    cin>>n;
    vll v(n);
    rep(i,0,n) cin>>v[i];
    
    sort(va);
    ll count=0;
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            if(i==j)
            {
                continue;
            }
            ll x=v[i]-v[j];

            if(x/v[i] < x/v[j]) count++;
        }
    }
    cout<<count<<endl;
 

}
int main()
{
demonb95;
  
ll t;
cin>>t;
while(t--)
{
 solve(); 
}
return 0;
}