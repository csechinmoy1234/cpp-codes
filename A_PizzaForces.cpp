#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        ll pc;
        cin>>pc;
        ll a=pc%6;
        ll b=pc/6;
        if (pc<=6)
        {
           cout<<"15"<<endl;
        }
        else if (a==1||a==2)
        {
          cout<<b*15+5<<endl;
        }
        else if(a==3||a==4)
        {
            cout<<b*15+10<<endl;
        }
         else if (a==5)
         {
            cout<<b*15+15<<endl;
         }
           else{
            cout<<b*15<<endl;
           }
        }
        }
