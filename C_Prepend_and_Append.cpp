#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int pc;
        cin>>pc;
        string s;
        cin>>s;int ct=0;
        int cf=0;
        for (int i = 0; i < (pc/2); i++)
        {
            if (s[i]=='1' && s[pc-1-i]=='0')
            {
               ct++;
            }
            else if (s[i]=='0' && s[pc-1-i]=='1')
            {
               cf++;
            }
            else{
                ct+=0;
                cf+=0;
                break;
            }
        }
        cout<<pc-2*(cf+ct)<<endl;
           
        }
        }
