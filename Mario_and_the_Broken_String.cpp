#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
       int k;
       cin>>k;
       string s;
       cin>>s;
      int ct=0;
        for (int i = 0; i <(k/2); i++)
        {
            if (s[i]==s[i+(k/2)])
            {
               ct++;
            }
            else{
               ct+=0;
            }
        }
        if (ct==(k/2))
        {
            cout<<"YES"<<endl;
        }
        
        else{
            cout<<"NO"<<endl;
        }
      
       
        }
        }
