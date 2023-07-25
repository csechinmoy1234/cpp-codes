#include <bits/stdc++.h>
using namespace std;

   void chin() { 
        int p;
        cin>>p;
        vector<int>a;
        vector<int>b;int ct=0,cf=0;
        for (int i = 0; i < p; i++)
        {
            int k;
            cin>>k;
            a.push_back(k);
        }
        for (int i = 0; i < p; i++)
        {
           int g;
           cin>>g;
           b.push_back(g);
        }
        if(a[0]!=b[0] || a[p-1]!=b[p-1]){
            cout<<"NO"<<endl;
            return;
        }
        for (int i = 0; i < p; i++)
        {
          if(a[i]==1)ct++;
         
        }
        
         for (int i = 1; i < p-1; i++)
        {
         if(a[i]!=b[i] && a[i]==0 && ct==0){
            cout<<"NO"<<endl;
            return;
         }
         else if(a[i]!=b[i] && a[i]==1){
            cout<<"NO"<<endl;
            return;
         }
        }
           cout<<"YES"<<endl;
        }
        int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
{
  chin();
}}