#include<bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
     while(alexa--){
        int pc;
        cin>>pc;
        int a[pc];int ct=0;
        for (int i = 0; i < pc; i++)
        {
           cin>>a[i];
        }
        for (int i = 0; i < pc; i++)
        {
           if (a[i]%2!=0)
           {
           ct++;
           }
           else{
            ct+=0;
           }
           
        }
        if(ct%2==0 && ct>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     }
}