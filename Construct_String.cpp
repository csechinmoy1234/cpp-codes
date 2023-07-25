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
        cin>>s;
        string s1;
        cout<<s[0];
        for (int i = 0; i < pc-1; i++)
        {
            if(s[i]!=s[i+1]){
                // s1.push_back(s[i+1]);
                cout<<s[i+1];
            }
        }
        if(s[pc-1]!=s[pc]){
            cout<<s[pc];
        }
        cout<<endl;   
        }
        }
