#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int p;
        cin>>p;
        int a[p];int b[p];int ct=0;int cf=0;int fr=0;
        for (int i = 0; i < p; i++)
        {
           cin>>a[i];
        }
        for (int i = 0; i < p; i++)
        {
           cin>>b[i];
        }
        for (int i = 0; i < p; i++)
        {
           if(a[i]>(2*b[i])){
            ct++;
            cf--;
           }
           else if (b[i]>(2*a[i]))
           {
            cf++;
            ct--;
           }
           else{
            fr++;
           }
        }
           cout<<ct+cf+fr<<endl;
        }
        }
