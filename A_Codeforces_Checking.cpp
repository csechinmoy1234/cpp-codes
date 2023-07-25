#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    {  string s="codeforces";int ct=0;
       char ab;
       cin>>ab;
       for (int i = 0; i < s.size(); i++)
       {
        if (s[i]==ab)
        {
           ct++;
        }
        
       }
       if (ct>0)
       {
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
       
       
        
           
        }
        }
