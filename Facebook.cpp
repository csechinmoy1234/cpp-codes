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
        int a[pc];
        int b[pc];int c[pc];int min=0;int z=0;int max=0;int f=0;
        for (int i = 0; i < pc; i++)
        {
          cin>>a[i];
        }
        for (int i = 0; i < pc; i++)
        {
          cin>>b[i];
        }
         
        for (int i = 0; i < pc; i++)
        {
           if (a[i]>max)
           {
            max=a[i];
            
           }
           
        }
        for (int i = 0; i < pc; i++)
        {
           if (a[i]==max)
           {
            if (b[i]>min)
            {
              f=i;
              min=b[i];
            }
            
           }
            
        }
        cout<<f+1<<endl;
        
        
         }
         }
