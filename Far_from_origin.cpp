#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        double  a,b,c,d;;
        cin>>a>>b>>c>>d;
        double  x=sqrt(pow(b-0,2) +pow(a-0,2)*1.0);
        double   y=sqrt(pow(d-0,2) +pow(c-0,2) *1.0);
        // cout<<x<<" "<<y<<endl;
        if(x<y)cout<<"BOB"<<endl;
        else if(x>y)cout<<"ALEX"<<endl;  
        else cout<<"EQUAL"<<endl;
        }
        }
