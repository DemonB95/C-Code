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
    ll a,b;
    cin>>a>>b;
    if(a>0 && b==0) cout<<"Gold";
    else if(a==0 && b>0) cout<<"Silver";
    else cout<<"Alloy";
 
}
int main()
{
demonb95;
  
ll t=1;
//cin>>t;
while(t--)
{
 solve(); 
}
return 0;
}