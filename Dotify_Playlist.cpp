#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int a,b,c;
          vector<int>v;
        cin>>a>>b>>c;
       for (int i = 0; i < a; i++)
       {
       
       
          int d,e;
           cin>>d>>e;
           if(e==c){
            v.push_back(d);
           }
          
       }
        int sum=0;
        sort(v.rbegin(),v.rend());
        if(v.size()==0){
            cout<<"-1"<<endl;
        }else{
        for (int i = 0; i < b; i++)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
        }
           
        
        }}
