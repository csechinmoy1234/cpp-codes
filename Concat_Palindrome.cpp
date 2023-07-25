#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define pb push_back
#define mp make_pair
#define F first
#define S second

#define rep(i,a,b) for (int i = a; i < b; i++)

#include <bits/stdc++.h>
using namespace std;
 
/**********PRE-PROCESSOR**********/
 
#define M 1000000007
#define PIE 3.141592653589793238462
//******SHORT-CUTS*********
#define ll long long
#define lld long double
#define pb push_back
#define popb pop_back
#define dec greater<ll>()
#define lb lower_bound
#define up upper_bound
#define umap unordered_map
#define uset unordered_set
#define vll vector<long long>
#define pll pair<ll, ll>
#define el "\n"
#define no cout << "NO" << el;
#define yes cout << "YES" << el;
#define len(x) x.length()
#define all(v) v.begin(), v.end()
 
//******TAKING-INPUTS********
#define inparr(arr, n)          \
    ll arr[n];                  \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }
#define inpvec(v, n)            \
    vector<ll> v;               \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.push_back(x);         \
    }
#define inp(n) \
    ll n;      \
    cin >> n;
#define inpstr(s) \
    string s;     \
    cin >> s;
 
//*****LOOPS-SORT*********
 
#define fl(i, a, b) for (int i = a; i < b; i++)
#define rfl(i, a, b) for (int i = a; i > b; i--)
#define FL(i, a, b) for (int i = a; i <= b; i++)
#define RFL(i, a, b) for (int i = a; i >= b; i--)
#define asort(arr) sort(arr, arr + n)
#define dsort(arr) sort(arr, arr + n, greater<ll>())
 
//******NUMBER-THEORY***********
vector<bool> sieve(int n)
{
    vector<bool> sieve(n + 1, true);
    sieve[0] = false;
    sieve[1] = false;
    int i = 2;
    while (i * i <= n)
    {
        if (sieve[i] == true)
        { // if i is prime number
            int j = i * i;
            while (j <= n)
            { // marking multiples with false
                sieve[j] = false;
                j = j + i; // increment by multiple
            }
        }
        i = i + 1; // normal increment of outer loop, by 1
    }
    return sieve;
}
// Time Complexity:-O(n log (log n))
 
// Function to check whether a number is prime or not
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
 
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
// TC:- O(sqrt(n))
// SC:- O(1)
 
/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(long long x, unsigned int y, int p)
{
    int res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
               // equal to p
 
    if (x == 0)
        return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
// TC:- O(log y)
 
/*Function to calculate phi of a number. Number of Rela
tively prime numbers less than or equal to n*/
int phi(int n)
{
    int result = n;
    for (int p = 2; p * p <= n; ++p)
    {
        if (n % p == 0)
        {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
// TC:->O(√n log n)
// SC:->O(1)
 
// /Function to convert Decimal to Binary String/
string DecimalToBinary(int num)
{
    string str;
    while (num)
    {
        if (num & 1) // 1
            str += '1';
        else // 0
            str += '0';
        num >>= 1; // Right Shift by 1
    }
    reverse(all(str));
    return str;
}
/*TC:- O(log n)
  SC:- O(1)  */
 
//********PRINT-OUTS***********
#define printvec(v)       \
    for (auto i : v)      \
    {                     \
        cout << i << " "; \
    }                     \
    cout << endl;
#define printmap(mp)                                \
    for (auto i : mp)                               \
    {                                               \
        cout << i.first << " " << i.second << endl; \
    }
void solve(){
    ll m,n,ct=0,ct2=0;
    cin>>m>>n;
    string s1,s2;
    cin>>s1>>s2;
    string s=s1+s2;
    map<char,ll>mp;
    // map<char,ll>mp2;
    for (ll i = 0; i < m+n; i++)
    {
        mp[s[i]]++;
    }
    // for (ll i = 0; i < m; i++)
    // {
    //     mp2[s2[i]]++;
    // }
    for (auto it : mp)
    {
        if((it.second)%2){
            ct++;
        }
        
    }
    // for (auto it: mp2)
    // {
    //     if((it.second)%2){
    //         ct2++;
    //     }
        
    // }
    if(ct>1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    


    return 0;
}