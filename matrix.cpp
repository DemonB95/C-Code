#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef long long int  lli;
#define pb push_back 
#define mp make_pair
#define pll pair<ll, ll>
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
long double a[1000000];
long double func(int n)
{
    if(n==1) return 1;
    if(a[n]!=-1) return a[n];
    else 
    {

        long double sum=0;
        rep(i,1,n)
        {
            sum+=(func(n-i)*func(i));
        }
        return a[n]=sum;
    }
}
void solve()
{
    int n;
    cin>>n;
    rep(i,0,1000000)
    {
        a[i]=-1;
    }
    long double ans=func(n);
    cout<<ans;
 
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