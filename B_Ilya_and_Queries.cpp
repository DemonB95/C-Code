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
  
    string s;
    ll m,a[1000001],l,r,count;
    cin>>s>>m;
    a[0]=0;
    count=0;
    rep(i,1,s.length())
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        a[i]=count;
    }
    while(m--)
    {
        cin>>l>>r;
        cout<<a[r-1] - a[l-1]<<endl;    
    }

return 0;
}