#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int p,c;
        cin>>p>>c;
        if(((c-p)%2==1) && p<c){
            cout<<"1"<<endl;
        }
        else  if(((c-p)%2==0) && p<c){
            cout<<"2"<<endl;
        }
         else  if(((p-c)%2==0) && p>c){
            cout<<"1"<<endl;
        }
         else  if(((p-c)%2==1) && p>c){
            cout<<"2"<<endl;
        } 
        else{
            cout<<"0"<<endl;
        }  
        }
        }
