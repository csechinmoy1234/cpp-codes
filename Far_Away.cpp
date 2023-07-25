#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
      long long int n,s;
       cin>>n>>s;
      long long int sum=0;
      long long int a[n];
       for (int i = 0; i < n; i++)
       {
        cin>>a[i];
       }
       for (int i = 0; i < n; i++)
       {
         
           
         
         if (a[i]>(s/2))
         {
            sum+=abs(a[i]-1);
         }
         else
         {
             sum+=abs(s-a[i]);
         }
         

       
         
         
       }
       cout<<sum<<endl;
        }
        }
