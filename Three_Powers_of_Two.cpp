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
        int ct=0;
        for (auto i:s)
        {
            if (i=='1')
            {
                ct++;
            }
            
        }
         if (s =="1"|| s =="10")
         {
            cout<<"NO"<<endl;
         }
         else if (ct<=3)
         {
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
        }
        }
