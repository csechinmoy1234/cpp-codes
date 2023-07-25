#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
         int n;
        cin>>n;
        int a[n];
        int ct=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
           if (a[i]>a[i+1])
           {
             ct++;
           }
           
        }
        if (ct<=1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
        
        
          
        }
        
