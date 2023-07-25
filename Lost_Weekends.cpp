#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
       
        int a[6],p,b[6];int sum=0;
       cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>p;
        for (int i = 1; i < 6 ; i++)
        {
           b[i]= a[i] * p;
        }
        
       for (int i = 1; i < 6; i++)
       {
         sum=sum+b[i];
       }
       
       if (sum<=120)
       {
        cout<<"No"<<endl;
       }
       else
       {
        cout<<"Yes"<<endl;
       }
       
       
        }
        }
