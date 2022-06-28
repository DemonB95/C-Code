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

int main()
{
demonb95;
  
ll t;
cin>>t;
while(t--)
{
   int n;
   cin>>n;
   int x;
   bool flag=false;
   for(int i =0 ; i<n ; i++)
   {
       cin>>x;
       int y =  sqrt(x);
       if(y*y !=x)
       {
           flag=true;
       }
   }
   if(flag)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}
return 0;
}