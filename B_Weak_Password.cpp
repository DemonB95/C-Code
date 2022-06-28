#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define pb push_back
#define va v.begin(), v.end()
#define vd v.begin(), v.end(), greater<ll>()
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define si set<int>
#define sll set<long long>
#define endl "\n"
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define demonb95                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    demonb95;
   string s;
   cin>>s;
     ll a=s[0]-'0';
     ll b=s[1]-'0';
     ll c=s[2]-'0';
      ll d=s[3]-'0';
   if(b == (a+1)%10 && c== (b+1)%10 && d==(c+1)%10)
   {
       cout<<"Weak";
   }else if(a==b && b==c && c==d && a==d)
   {
       cout<<"Weak";
   }else 
   {
       cout<<"Strong";
   }
    return 0;
}