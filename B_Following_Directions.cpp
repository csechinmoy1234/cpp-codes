#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int pc;
    cin >> pc;
    string s;
    cin >> s;int ct=0;
    int cl=0;
    for (int i = 0; i <pc; i++)
    {
        if (s[i] == 'U')
        {
            ct++;
        }
        else if (s[i] == 'D')
        {
            ct--;
        }
        else if (s[i] == 'L')
        {
            cl--;
        }
        else if(s[i] == 'R')
        {
            cl++;
        }
        if (ct == 1 && cl == 1)
        {
            cout << "YES";
            return;
        }
    }
    cout<<"NO";
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
