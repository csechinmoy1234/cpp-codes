
#define ll long long

#include <bits/stdc++.h>
using namespace std;


int main()
{
    ll alexa;
    cin >> alexa;
    while (alexa--)
    {
          ll a, b;
    cin >> a >> b;
    ll c[a];
    ll ct = 0;
    ll d[a];
    for (ll i = 0; i < a; i++)
    {
        cin >> c[i];
    
    }
    d[0] = c[0];
    for (ll i = 1; i < a; i++)
    {
        d[i] = c[i] + d[i - 1];
    }

    ll l, r, k;
    while (b--)
    {
        cin >> l >> r >> k;
        l--;r--;
        ll o = d[r]-d[l-1];
        if(l==0){
            o=d[r];
        }
        ll x=(k*(r-l+1));
        ll g= c[a-1]-o+x;

        if (g%2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    }
   
}
