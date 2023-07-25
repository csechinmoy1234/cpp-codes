#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {   int n;
        cin>>n;
        string f[n];
        string l[n];
        for (int i = 0; i < n; i++)
        {
           cin>>f[i]>>l[i];
        }
        
for (int i = 0; i < n; i++)
{int h=0;
     for (int j = 0; j < n; j++)
        {
          if (f[i]==f[j]  && i!=j)
          {
            h = 1;
          }
          
        }
        if (h==1)
        {
            cout<<f[i]<<" "<<l[i]<<endl;
        }
        else{
            cout<<f[i]<<endl;
        }
}

       
        
           
            
      
        
        }
        }
