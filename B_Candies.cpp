#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;int ct=0;vector<int>v;
    while (alexa--)
    { 
        int pc;
        cin>>pc;
        if(pc%2==0){
            cout<<"-1"<<endl;
        }
        while(pc!=1){
            if((pc-1)%2==0){
                pc=(pc-1)/2;
                int h=1;
               v.push_back(h);
              
                
            }
            else if((pc+1)%2==0){
                 pc=(pc+1)/2;
int g=2;
                v.push_back(g);
                
            }
           else{
            break;
           }
        }
          if(v.size()>0){
            cout<<v.size()<<endl;
            for (int i = 0; i >v.size() ; i--)
            {
                cout<<v[i];
            }
            cout<<endl;
          }
        }
        }
