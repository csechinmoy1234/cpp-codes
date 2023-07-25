#include <bits/stdc++.h>
using namespace std;
void chin(){
  int a,b,c;
  cin>>a>>b>>c;
  vector<int>v;int ct=0,cf=0,ans=0;
  for (int i = 0; i < a; i++)
  {
    int k;
    cin>>k;
    v.push_back(k);
    if(k%b==0 && k%c==0){
        ct++;
    }
    else if (k%b==0)
    {
        ans++;
    }
    else if( k%c==0){
        cf++;
    }
    }
   if (cf==0 && ct!=0 && ans==0)
   {
    cout<<"BOB"<<endl;
   }
   else if (cf==0 && ct==0 && ans==0)
   {
   cout<<"ALICE"<<endl;
   
   }
   else if(ct==0){
    if(cf>=ans){
        cout<<"ALICE"<<endl;
    }
    else{
        cout<<"BOB"<<endl;
    }
   }
   else{
    if(cf>ans){
            cout<<"ALICE"<<endl;
    }else{
        cout<<"BOB"<<endl;
    }
   }
   
    
  }
  


int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        chin();
        
           
        }
        }