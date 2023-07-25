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
        int d=2*pc;
        int a[pc];
        set<int>s;
        int b[pc];int c[d];int z=0;int f=0;
        for (int i = 0; i < pc; i++)
        {
         cin>>a[i];
        }
        for (int i = 0; i < pc; i++)
        {
         cin>>b[i];
        }
        for (int i = 0; i < pc; i++)
        {
            c[i]=a[i];
            c[i+(pc)]=b[i];
        }
        
       sort(c,c+d);
       int v=c[pc-1]-c[0];
       
       for (int i = 0; i < pc+2; i++)
       {
        z= (c[i+pc-1]-c[i]);
        s.insert(z);

           
          
       }
        f==s.begin();
       cout<<f<<endl;
    }
   
   
        }
        
