#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int pc,mc;
        cin>>pc>>mc;
        int x=pc-(__gcd(mc,__gcd(pc,mc)));
        cout<<x<<endl;
        
           
        }
        }
