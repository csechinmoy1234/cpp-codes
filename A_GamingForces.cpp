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
        set<int>s;
        int a[pc];int ct=0;
        for (int i = 0; i < pc; i++)
        {
           cin>>a[i];
           s.insert(a[i]);
        }
        for (int i = 0; i < pc; i++)
        {
           if (a[i]==1)
           {
            ct++;
           }
           
        }int g=0;
       if (ct%2==0)
       {
        g=ct/2;
       }
       else{
        g=ct/2+1;
       }
       int h=pc-ct;
        cout<<g+h<<endl;   
        }
        }
