#include <bits/stdc++.h>
using namespace std;
int main()

    {
        string s;
        cin >> s;
        string d = "hello";
        int j = 0;
        int ct = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == d[j])
            {
                j++;
                ct++;

                if (ct == 5)
                {
                    break;
                }
            }
        }
        if (ct == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

