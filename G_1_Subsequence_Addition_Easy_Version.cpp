#include <bits/stdc++.h>
using namespace std;
void chin()
{
  
        long long int pc;
        cin>>pc;
        vector<long long int>v;
        for (long long int i = 0; i < pc; i++)
        {
            long long int k;
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        long long int ct=v[0];
        if(v[0]>1){
            cout<<"NO"<<endl;
            return;
        }
        for (long long int i = 1; i < pc; i++)
        {
           if(v[i]>ct){
            cout<<"NO"<<endl;
            return;
           }
           else{
            ct+=v[i];
           }
        }
        
       cout<<"YES"<<endl;
        }
        
 int main(){
      long long int alexa;
    cin>>alexa;
    while (alexa--)
    { chin();}
}