#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin >> alexa;
    while (alexa--)
    {
        int pc;
        cin >> pc;
        if (pc == 50)
        {
            cout << "0" << endl;
        }
        else if (pc < 50)
        {
            if ((50 - pc) % 2 != 0)
            {
                int f = (50 - pc) / 2 + 3;
                cout << f << endl;
            }
            else
            {
                cout << (50 - pc) / 2 << endl;
            }
        }
        else
        {
            if ((pc - 50) % 3 == 0)
            {

                cout << (pc - 50) / 3 << endl;
            }
            else if ((pc - 50) % 3 == 1)
            {
                cout << ((pc - 50) / 3) + 2 << endl;
            }
            else
            {
                cout << ((pc - 50) / 3) + 4 << endl;
            }
        }
    }
}
