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
        int a[pc];int ct=0;
        for (int i = 0; i < pc; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < pc; i++)
        {
            if (a[i]==0)
            {
                ct++;
            }
            
        }
        if (ct%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            
 cout<<"NO"<<endl;
        }
           
        }
        }
