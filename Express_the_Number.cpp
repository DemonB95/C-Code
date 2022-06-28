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
void solve()
{
    ll n,x;
    cin>>n>>x;
        if(x==n)
        {
            cout<<1<<endl;

        }else if(x>n)
        {
            cout<<-1<<endl;
        }
        else if(n-x==1)
        {
            cout<<2<<endl;
        }
        else
        {
            if((ceil(log2(n-x)) == floor(log2(n-x))))
            {
              cout << 2 << endl;
            }
            else
            {
                cout <<-1<< endl;
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