#include <bits/stdc++.h>
using namespace std;
 int main()
{
    long long int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        long long int pc;
        cin>>pc;long long int ct=0;
        while(pc>1){
        if(pc%6==0){
           
            pc=pc/6;
        }
       else{
        pc*=2;
       }
       ct++;
        }
         if(pc==1)  {
            cout<<ct<<endl;
         }
         else{
            cout<<"-1"<<endl;
         }
        }
        }
