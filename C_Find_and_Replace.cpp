#include <bits/stdc++.h>
using namespace std;
void chin()
{
    int pc;
    cin >> pc;
    string s;
    cin >> s;
    vector<int> v(26, -1);
    for (int i = 0; i < pc; i++)
    {
        if (v[s[i] - 'a'] == -1)
        {
            v[s[i] - 'a'] == i & 1;
        }
        else
        {
            if (v[s[i] - 'a'] != (i & 1))
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int alexa;
    cin >> alexa;
    while (alexa--)
    {
        chin();
    }
}