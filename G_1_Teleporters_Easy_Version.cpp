#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        ll a,b;
        cin>>a>>b;ll ct=0;ll sum=0;
        vector<ll>mkc;
        for (int i = 0; i < a; i++)
        {
            ll l;
            cin>>l;
            mkc.push_back(l);
            mkc[i]=l+i+1;
        }
        sort(mkc.begin(),mkc.end());
        for (int i = 0; i < a ; i++)
        {
            sum=sum+mkc[i];
            if (sum<=b)
            {
                ct++;
            }
            
            
        }
        
        cout<<ct<<endl;
           
        }
        }
