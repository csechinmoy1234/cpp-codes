#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a;ll ct=0;
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
       ll c;
       cin>>c;
       a.push_back(abs(c));
       if (c<0) ct++;
       
       sum=sum+abs(c);
       
    }
    sort(a.begin(),a.end());
    if (ct%2)
    {
        cout<<sum-2*a[0];
    }
    else{
        cout<<sum;
    }
    
}

int main()
{
    int alexa;
    cin >> alexa;
    while (alexa--)
    {
        solve();
        cout << endl;
    }
}
