#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
int t;
cin>>t;int ct=0;
     while (t>0)
     {
        if(t%10==7){
            ct++;
        }
        else{
            ct+=0;
        }
        t=t/10;
     }
       
       if (ct>0)
       {
        cout<<"YES"<<endl;
       }
         else{
            cout<<"NO"<<endl;
         }         
        }
        }
