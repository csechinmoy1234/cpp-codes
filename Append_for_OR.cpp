#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int p,c;
        cin>>p>>c;
        int a[p];int flag=0;
        for (int i = 0; i<p; i++)
        {
            cin>>a[i];

        }
        int d=a[0];
        for (int i = 1; i < p; i++)
        {
            d|=a[i];
            
        }
         d=c-d;
         int f=d & c;
         if (d==f)
         {
            cout<<f<<endl;
         }
            else{
                cout<<"-1"<<endl;
            }      
        
           
        }
        }
