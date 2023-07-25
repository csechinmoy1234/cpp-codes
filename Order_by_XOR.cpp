#define ll long long int
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin >> alexa;
    while (alexa--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c)
        {
            cout << 0 << endl;
        }
        else
        {   ll A=a;
            if ((A ^ b) < (A ^ c))
            {
                cout << A << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
}
