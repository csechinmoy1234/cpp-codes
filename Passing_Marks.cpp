
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alexa;
    cin >> alexa;
    while (alexa--)
    {
        int x, y;
        cin >> x >> y;
        if (x % 2 == 0)
        {
            int f = y -(2+x);
            int g= (f/2)+2;
            cout << g<< endl;
            break;
        }
        else if (x % 3 == 0)
        {
            int g = y - (3+x);
            int f = (g / 2) + 1;
            cout << f << endl;
            break;
        }
        else if (x % 5 == 0)
        {
            int g = y - (5+x);
            int f = (g / 2) + 1;
            cout << f << endl;
            break;
        }
        else
        {
            int g = x - (7+x);
            int f = (g / 2) + 1;
            cout << f << endl;
            break;
        }
    }
}