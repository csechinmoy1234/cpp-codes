#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int pc;
        cin>>pc;int ct=0;
        string s1;
        cin>>s1;
        string s2;
        s2=s1;
        
        sort(s1.begin(),s1.end());
           for (int i = 0; i < pc; i++)
           {
            if(s1[i]!=s2[i]){
                ct++;
            }
            else{
                ct+=0;
            }
           }
           cout<<ct<<endl;
        }
        }
