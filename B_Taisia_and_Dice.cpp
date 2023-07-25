#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        long long int g,h,i;
        cin>>g>>h>>i;
        long long int f=h-i;
        long long int a=(i%(g-1));
        long long int b=(i/(g-1));
        cout<<f<<" ";
        for (int i = 1; i < g; i++)
        {
            if (a>0)
            {
                cout<<b+1<<" ";
                a--;
            }
            else{
                cout<<b<<" ";
            }
        }
        cout<<endl;
           
        }
        }
