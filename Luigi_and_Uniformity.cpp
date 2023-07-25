#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
        int g;
        cin>>g;
        
        int a[g];
        int ct=0;
        for (int i = 0; i < g; i++)
        {
            cin>>a[i];
        }
        int f=sizeof(a[g])/sizeof(a[0]);
        sort(a,a+f);
        int x=a[0];
        for (int i = 1; i < g; i++)
        {  if(a[i]!=x){
            if (a[i]%x==0)
            {
               ct++;
            }else{
                cout<<ct<<endl;
                break;
            }
        }
        }
       
        }
        }
