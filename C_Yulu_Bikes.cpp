#include <bits/stdc++.h>
using namespace std;
void nunu()
    { 
        int a,b;
        cin>>a>>b;
        vector<int>v;int ct=0;
        for (int i = 0; i < a; i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        
        for (int i = 0; i < a; i++)
        {  int j=1;
           if (v[i+1]-v[i]>b)
           {
            cout<<"-1"<<endl;
            return;
           }
          else if(v[i+j]-v[i]<=b && v[i+j+1]-v[i]>b){
            ct++;
            i++;
           
            
           } 
           else if(v[i+j]-v[i]<b && v[i+j+1]-v[i]==b)
           {
             ct+=1;
             
             j=j+1;
            
           }
else{
    
    j++;
}
        }
       cout<<ct<<endl;
        

           
        }
        int main()
{
   {
        nunu();
    }
        }
