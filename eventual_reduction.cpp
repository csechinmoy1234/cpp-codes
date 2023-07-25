#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ct=0;
        sort(s.begin(),s.end());
        for (int i = 0; i < n; i++)
        {
           if (s[i]==s[i+1])
           {
            i++;
            continue;
           }
           else{
            i++;
            ct++;
           }
        }
        if (ct==0)
        {
            cout<<"YES"<<endl;
        }
        else{
cout<<"NO"<<endl;
        }
    }
}
