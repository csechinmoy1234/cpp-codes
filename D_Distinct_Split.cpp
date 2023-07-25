#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<int> s1, s2;
    vector<pair<ll, ll>> indexing(n);
    int i = 0;
    for (int i = 0; i < n; i++)
    {

        s1.insert(s[i]);
        indexing[i].first = s1.size();
    }
    for (int i = n - 1; i >= 0; i--)
    {

        s2.insert(s[i]);
        indexing[i].second = s2.size();
    }
    vector<ll> maxii(n - 1);

    for (int i = 0; i < n - 1; i++)
    {

        maxii[i] = indexing[i].first + indexing[i + 1].second;
    }
    ll maxi = *max_element(maxii.begin(), maxii.end());
    cout<<maxi;
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
