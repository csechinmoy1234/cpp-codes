#include <bits/stdc++.h>
using namespace std;
int main()
{   int h=1e9+7;
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        long long int pc;
        cin>>pc;int i=1;
        long long int f;
        f=pc*(pc-1);
        while (i<=pc)
        {
           f=((f%h)*i)%h;
           i++;
        }
        cout<<f<<endl;
        
           
        }
        }
