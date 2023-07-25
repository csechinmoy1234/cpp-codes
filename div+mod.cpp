#include <bits/stdc++.h>
using namespace std;
int main()


{

    int t;
    cin>>t;
    while (t--)
    {
        
int x,y,z;


        cin>>x>>y>>z;
        
        int ct=y/z+y%z;
        int f=y/z*z-1;
        if (f>=x)
        {
            ct=max(ct,f/z+f%z);
        }
        cout<<ct<<endl;
        
    }
    
    }