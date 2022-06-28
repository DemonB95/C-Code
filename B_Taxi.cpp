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
void solve()
{
    ll n,count=0,c1=0,c2=0,c3=0;
    cin>>n;
    vll v(n);
    rep(i,0,n)
    {
        cin>>v[i];
        if(v[i]==1) c1++;
        else if(v[i]==2) c2++;
        else if(v[i]==3) c3++;
        else count++;
    } 
    if(c1<c3)
    {
        count+=c1;
        c1=0;
        c3=c3-c1;
    }else {
        count+=c3;
        c3=0;
        c1=c1-c3;  
    }
    count+=c2/2;
    c2=c2%2;
    if(c3!=0)
    {
        count+=c3+c2;
    }else 
    {
        count+=(c1+c2*2+3)/4;
    }    
    cout<<count;
       
 
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