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
        int a[pc];
        map<int,int>m;
        for (int i = 0; i < pc; i++)
        {
            cin>>a[i];
            
        }
         for (int i = 0; i < pc; i++)
        {
            m[a[i]]++;
            
        }
        int ans=0;
        for(auto i : m){
            if(i.second>ans){
                ans=i.second;
            }
        }
         cout<<pc-ans<<endl;  
        }
        }
