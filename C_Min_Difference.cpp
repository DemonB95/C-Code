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
int findSmallestDifference(int A[], int B[],
                           int m, int n)
{
    // Sort both arrays using
    // sort function
    sort(A, A + m);
    sort(B, B + n);
 
    int a = 0, b = 0;
 
    // Initialize result as max value
    int result = INT_MAX;
 
    // Scan Both Arrays upto
    // sizeof of the Arrays
    while (a < m && b < n)
    {
        if (abs(A[a] - B[b]) < result)
            result = abs(A[a] - B[b]);
 
        // Move Smaller Value
        if (A[a] < B[b])
            a++;
 
        else
            b++;
    }
 
    // return final sma result
    return result;
}
void solve()
{
    
}
int main()
{
demonb95;
  
ll n,m;
    cin>>n>>m;
    int v1[n],v2[m];
    rep(i,0,n) cin>>v1[i];

    rep(i,0,m) cin>>v2[i];
   
    cout<<findSmallestDifference(v1,v2,n,m)<<endl;
    
 
return 0;
}