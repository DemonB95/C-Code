#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef long long int  lli;
#define pb push_back 
#define va(a) a.begin(),a.end()
#define vd(d) d.begin(),d.end(),greater<ll>()
#define vi vector<int> 
#define vll vector<long long >
#define endl "\n"
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define Anit ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    ll n,sum=0;
    cin>>n;
    vll v(n);
    rep(i,0,n)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(va(v));
    ll x=v[n-1];
float ans=x + (sum-x)/float(n-1);
 cout<<fixed<<setprecision(11)<<ans<<endl;
 
}
int main()
{
Anit;
  
ll t;
cin>>t;
while(t--)
{
   solve(); 
}
return 0;
}