#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
       int n;
       int a[n];
       for (int i = 0; i < a.size(); i++)
       {
        cin>>a[i];
       }
       min = a[0]
       for (int i = 0; i <a.size(); i++)
       {
        if (a[i]<min)
        {
            min = a[i];
        }
        
       }
       flag = 1;
       for (int i = 0; i < a.size(); i++)
       {
        for (int j = 0; j < n; j++)
        {
            if (a[j]%i != 0)
            {
                flag = 0;
                break;
            }
            
        }
        if (flag == 1)
        {
            ratio =i;
        }
        
        
       }
       for (int i = 0; i < n; i++)
       {
        n = a[i]/ratio;
        cout<<n<<endl;
       }
       
       
       


        }
        }
