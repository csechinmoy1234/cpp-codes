#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
       
       int a,b,c,d;
       cin>>a>>b>>c>>d;int k=0;int j=0;
       set<int>s;

       for (int i = a; i <= b; i++)
       {

        k=i;
        s.insert(k);
       }
       for (int i = c; i <= d; i++)
       {
        j=i;
        s.insert(j);
       }

       int f=s.size();
       cout<<f<<endl;
       
       
        
        
           
        }
        }
