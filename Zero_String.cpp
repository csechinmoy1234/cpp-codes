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
    cin>>s;int ct=0;int cf=0;
        for (int i = 0; i < pc; i++)
        {
            if (s[i]=='1')
            {
                ct++;
            }
            else{
                cf++;
            }
            
        }
        if(cf==0) {
            cout<<"1"<<endl;
        }       
          else if (cf==ct)
          {
            cout<<cf<<endl;
          }
          else if (ct>cf)
          {
           cout<<cf+1<<endl;
          }
       
          
         
           else{
            cout<<ct<<endl;
           }
        }
        }
