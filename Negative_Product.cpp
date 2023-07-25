#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int x,y,z;
        cin>>x>>y>>z;
        int d=x*y;
        int c=y*z;
        int f=x*z;
        
        if (d<0 || c<0 ||f<0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
           
        }
        }
