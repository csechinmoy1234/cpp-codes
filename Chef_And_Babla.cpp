#include <bits/stdc++.h>
using namespace std;
  


int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int pc;
        cin>>pc;int a[pc];int ct=0;
        for (int i = 0; i < pc; i++)
        {
            cin>>a[i];
        }
        sort(a,a+pc);
       int min = *(min_element(a,a+pc));
        

 
        for (int i = 0; i < pc; i++)
        {
            if (a[i]>0 && a[i]==min)
            {
                ct=a[i];

            }
            
        }
        if (ct>0)
        {
           cout<<ct<<endl;
        }
        
        
        }
        }
