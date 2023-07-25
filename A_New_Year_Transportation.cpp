#include <bits/stdc++.h>
using namespace std;
int main()
{
    
        int p,c;
        cin>>p>>c;
        int a[p-1];int r=1;
        for ( int i = 0; i < p-1 ; i++)
        {
            cin>>a[i];
        }
       while (r<c)
       {
        r=r+a[r-1];
       }
       
         if (r==c)
         {
                cout<<"YES";
         }
            else{
            cout<<"NO";
            }
       
        
        
           
        
        }
