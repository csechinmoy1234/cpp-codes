#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        long long int pc;
        cin>>pc;
        vector<vector<long long int>>a(pc,vector<long long int>(pc-1));
        for (long long int i = 0; i < pc; i++)
        {
           for (long long int j = 0; i < pc-1; i++)
           {
            cin>>a[i][j];
           }
           
        }
        long long int b=-1;long long int c=-1;
        for (long long int i = 0; i < pc; i++)
        {
           long long int d=0;
           for (long long int j = 0; i < pc; i++)
           {
            if (i==j)continue;
            
            if (a[i][1]==a[j][0])
            {
                b=i;
                c=j;
                d=1;
                break;
            }
            
           }
           if (d==1)
           {
            break;
           }
           
        }
        cout<<a[b][0]<<" ";
        for (int i = 0; i < pc-1; i++)
        {
           cout<<a[c][i]<<" ";
        }
        cout<<endl;
           
        }
        }
