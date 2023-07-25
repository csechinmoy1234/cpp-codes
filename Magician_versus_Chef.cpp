#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
       int a,b,c,m,n;
       cin>>a>>b>>c;
      
       
       
       for (int i = 0; i < c; i++)
       {
        cin>>m>>n;
        if (m==b)
        {
            b=n;
        }
        else if(n==b){
            b=m;
        }
       }
       cout<<b<<endl;
        }
        }
