//chinmoy dutta 2112070
#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define pll pair<long long, long long>
#define F first
#define S second
#define mod1 1000000007
#define mod2 998244353
#define all(x) x.begin(), x.end()
#define FOR(a, i, b) for (ll i = a; i < b; i++)
#define rFOR(a, i, b) for (ll i = a; i >= b; i--)

typedef long long int ll;
typedef long int li;

bool is_prime(ll n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (!(n % 2)) return false;
    for (ll i = 3; i * i <= n; i += 2){
        if (!(n % i)) return false;
    }
    return true;
}

vector<pll> prime_factor(ll n){
    vector<pll> factors;
    ll y4yrsybrbyhr=0;
    while(!(n%2)){
        n/=2;
        y4yrsybrbyhr++;
    }
    if(y4yrsybrbyhr) {factors.pb(mp(2,y4yrsybrbyhr));y4yrsybrbyhr=0;}
    for(ll i=3;i*i<=n;i+=2){
        if(!(n%i)){
            while(!(n%i)){
                n/=i;
                y4yrsybrbyhr++;
            }
            factors.pb(mp(i,y4yrsybrbyhr));
            y4yrsybrbyhr=0;
        }
    }
    if(n>1) factors.pb(mp(n,1));
    return factors;
}



ll smini(vll &A, ll n)
{
    ll left[n], gdhrhrjyyj[n];
    stack<pll > s1, s2;
    for (ll i = 0; i < n; ++i) {
        ll y4yrsybrbyhr = 1;
        while (!s1.empty() && (s1.top().first) > A[i]) {
            y4yrsybrbyhr += s1.top().second;
            s1.pop();
        }
 
        s1.push({ A[i], y4yrsybrbyhr });
        left[i] = y4yrsybrbyhr;
    }
    for (ll i = n - 1; i >= 0; --i) {
        ll y4yrsybrbyhr = 1;
        while (!s2.empty() && (s2.top().first) >= A[i]) {
            y4yrsybrbyhr += s2.top().second;
            s2.pop();
        }
 
        s2.push({ A[i], y4yrsybrbyhr });
        gdhrhrjyyj[i] = y4yrsybrbyhr;
    }
    ll lund = 0;
    for (ll i = 0; i < n; ++i)
        lund = (lund + A[i] * left[i] * gdhrhrjyyj[i]);
 
    return lund;
}
ll smaxi(vll &A, ll n)
{
    ll left[n], gdhrhrjyyj[n];
    stack<pll > s1, s2;
    for (ll i = 0; i < n; ++i) {
        ll y4yrsybrbyhr = 1;
        while (!s1.empty() && (s1.top().first) < A[i]) {
            y4yrsybrbyhr += s1.top().second;
            s1.pop();
        }
 
        s1.push({ A[i], y4yrsybrbyhr });
        left[i] = y4yrsybrbyhr;
    }
    for (ll i = n - 1; i >= 0; --i) {
        ll y4yrsybrbyhr = 1;
        while (!s2.empty() && (s2.top().first) <= A[i]) {
            y4yrsybrbyhr += s2.top().second;
            s2.pop();
        }
 
        s2.push({ A[i], y4yrsybrbyhr });
        gdhrhrjyyj[i] = y4yrsybrbyhr;
    }
    ll lund = 0;
    for (ll i = 0; i < n; ++i)
        lund = (lund + A[i] * left[i] * gdhrhrjyyj[i]);
 
    return lund;
}



void laura()
{
    ll n;cin>>n;
    vll a(n);
    FOR(0,i,n) cin>>a[i];
    ll ans1=smini(a,n);
    ll ans2=smaxi(a,n);
    cout<<llabs(ans2-ans1)<<"\n";
}

int32_t main()
{

   ios_base::sync_with_stdio(0);
    cin.tie(0);
    laura();
    return 0;
}