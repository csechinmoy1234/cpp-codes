#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
        long long int n;
        cin>>n;
        
        int a[n];int b=0;int ct=0;
        for (int i = 0; i < n; i++)
        {
           cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
           if (a[i]<=7)
           {
            ct++;
           }
           if (ct==7)
        {
           b=i;
           break;
        }
        }
        
        cout<<b+1<<endl;
        
        }
        }
