#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
       string s;
       cin>>s;
       int ct=0;int x=0;
       
       for (int i = 0; i < s.size(); i++)
       {
        if (s[i]==1)
        {
            ct++;
        }
        else if (s[i]==0)
        {
            ct=0;
            x=ct;
        }
        
       if (x!=0 && ct!=0)
       {
        cout<<"NO"<<endl;
       }
       else
       {
         cout<<"YES"<<endl;
       }
       
       }
    //    if (x!=0 && ct!=0)
    //    {
    //     cout<<"NO"<<endl;
    //    }
    //    else
    //    {
    //      cout<<"YES"<<endl;
    //    }
       
    }}