#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
      int a,b;
      cin>>a>>b;
      int f=max(a,b);
      int g=min(a,b);
      int h=f-g;
    int i=0;
      while (h>0)
      {
        i++;
      }
     int l=f-(i*g);
     cout<<l<<endl;
        }
        }
