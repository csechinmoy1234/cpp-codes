#include <bits/stdc++.h>
using namespace std;
int main()
{
    
        int pc;
        cin>>pc;
        int a[pc];int sum=0;
        for (int i = 0; i < pc; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < pc; i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
           
        
        }
