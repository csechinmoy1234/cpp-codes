#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int a,b,c,net;
        cin>>a>>b>>c>>net;
        if(a+b>=net || b+c>=net || a+c>=net){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }   
        }
        }
