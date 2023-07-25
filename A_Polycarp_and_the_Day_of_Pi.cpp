#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        string s;
        cin>>s;int ct=0;
        string a="314159265358979323846264338327";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]==a[i])
            {
               ct++;
            }
            else{
                ct+=0;
                break;
            }
        }
        cout<<ct<<endl;
        
           
        }
        }
