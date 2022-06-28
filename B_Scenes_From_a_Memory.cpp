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
    
    if (n <= 1)
        return false;
 
    
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
void solve()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   rep(i,0,n)
   {
      if(s[i]=='1')
      {
         cout<<1<<endl;
         cout<<1<<endl;
         return ;
      }
   }
   

 
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