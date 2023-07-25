#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int pc;
        cin>>pc;
        int a[pc];
        if(pc%2!=0){
            cout<<"-1"<<endl;
        }
         else{
            for(int i=0;i<pc;i++){
                if(i%2==0)
                {cout<<i+2<<" ";}
                else{
                    cout<<i<<" ";
                }
            }
           
         }  
         cout<<endl;
        }
        }
