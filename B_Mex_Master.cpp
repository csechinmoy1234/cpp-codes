#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int pc;int ct=0,cf=0,gr=0;
        cin>>pc;
        vector<int>v;
        for (int i = 0; i < pc; i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        for (int i = 0; i < pc; i++)
        {
           if (v[i]==0)
           {
            ct++;
           }
           else if(v[i]==1){
            cf==1;
           }
           else if (v[i]>1)
           {
            gr==1;
           }
           
        }
        int cnt0=pc-ct;
        if(ct>cnt0+1){
            if(cf==0){
                cout<<"1"<<endl;
            }
            else{
                if(gr){
                    cout<<"1"<<endl;
                }
                else{
                    cout<<"2"<<endl;
                }
            }
        
        }else{
            cout<<"0"<<endl;
        }
           
        }
        }
