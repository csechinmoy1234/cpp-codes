#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        long long int p,q,r;
        cin>>p>>q>>r;
        
        if (p<q && p<r)
        {
            cout<<"ALICE"<<endl;
        }
        else if (p>q && q<r)
        {
            cout<<"BOB"<<endl;
        }
        else if(r<p && r<q)
        {
            cout<<"CHARLIE"<<endl;
        }
           
        }
        }
